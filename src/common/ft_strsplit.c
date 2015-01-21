/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:29 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:29 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <stdlib.h>

static size_t	count_str(char *str, char c)
{
	char	*ptr;
	size_t	count;

	while (*str && *str == c)
		++str;
	count = 0;
	while ((ptr = ft_strchr(str, c)))
	{
		if (ptr - str != 0)
			++count;
		while (*ptr && *ptr == c)
			++ptr;
		str = ptr;
	}
	if (!ptr && ft_strlen(str))
		++count;
	return (count);
}

char			**ft_strsplit(char *str, char c)
{
	char			**tab;
	const size_t	count = count_str(str, c);
	size_t			i;
	char			*ptr;

	if (!(tab = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = 0;
	while (i < count && str)
	{
		while (str && *str && *str == c)
			++str;
		ptr = ft_strchr(str, c);
		if (ptr && ptr - str)
			tab[i] = ft_strndup(str, ptr - str);
		else if (!ptr && ft_strlen(str) != 0)
			tab[i] = ft_strdup(str);
		str = ptr;
		++i;
	}
	tab[i] = 0;
	return (tab);
}
