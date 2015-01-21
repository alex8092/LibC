/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnextline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:26 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:37:26 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <stdlib.h>

static ssize_t	last_ret(int set, ssize_t ret)
{
	static ssize_t	sret = 0;

	if (set)
		sret = ret;
	return (sret);
}

static int		get_line(char **buf, char *find, char **line, size_t *bufsize)
{
	const size_t	len = (*buf) ? find - *buf : 0;

	if (*buf && find)
	{
		if (len > 0 && *(find - 1) == '\r')
			*line = ft_strndup(*buf, len - 1);
		else
			*line = ft_strndup(*buf, len);
		if (*bufsize - len != 0 && *(find + 1))
		{
			ft_memcpy(*buf, find + 1, *bufsize - len - 1);
			*bufsize -= len + 1;
			(*buf)[*bufsize] = 0;
		}
		else
			*bufsize = 0;
		if (!*bufsize)
		{
			free(*buf);
			*buf = NULL;
		}
	}
	return ((len || *bufsize || last_ret(0, 0)) ? 1 : 0);
}

static void		merge(char **buffer, char *buf, ssize_t ret, size_t *bufsize)
{
	char	*ptr;

	ptr = *buffer;
	if (ptr)
	{
		*buffer = ft_strnjoin(ptr, *bufsize, buf, ret);
		*bufsize += ret;
	}
	else
	{
		*buffer = ft_strndup(buf, ret);
		*bufsize = ret;
	}
}

static char		*ft_find(char *buffer, size_t bufsize)
{
	static size_t	offset = 0;
	char			*find;

	if (buffer && (find = ft_strchr(buffer + offset, '\n')))
	{
		offset = 0;
		return (find);
	}
	offset += bufsize - offset;
	return (NULL);
}

int				ft_getnextline(int fd, char **line)
{
	static char		*buff = NULL;
	static size_t	bsize = 0;
	char			buf[GNL_BUFSIZE + 1];
	char			*find;
	ssize_t			ret;

	while (1)
	{
		if ((find = ft_find(buff, bsize)))
			return (get_line(&buff, find, line, &bsize));
		if ((ret = read(fd, buf, GNL_BUFSIZE)) == 0 && buff)
		{
			last_ret(1, 0);
			return (get_line(&buff, buff + bsize, line, &bsize));
		}
		else if (ret > 0)
		{
			last_ret(1, ret);
			buf[ret] = 0;
			merge(&buff, buf, ret, &bsize);
		}
		else
			return ((!ret) ? 0 : -1);
	}
}
