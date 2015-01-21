/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:28 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:42:32 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <stdlib.h>
#include <stdint.h>

static const char	*ft_strchr_bis(const char *cp, const char ch)
{
	if (cp[0] == ch || !cp[0])
		return ((cp[0] || !ch) ? cp : NULL);
	else if (cp[1] == ch || !cp[1])
		return ((cp[1] || !ch) ? cp + 1 : NULL);
	else if (cp[2] == ch || !cp[2])
		return ((cp[2] || !ch) ? cp + 2 : NULL);
	else if (cp[3] == ch || !cp[3])
		return ((cp[3] || !ch) ? cp + 3 : NULL);
	else if (cp[4] == ch || !cp[4])
		return ((cp[4] || !ch) ? cp + 4 : NULL);
	else if (cp[5] == ch || !cp[5])
		return ((cp[5] || !ch) ? cp + 5 : NULL);
	else if (cp[6] == ch || !cp[6])
		return ((cp[6] || !ch) ? cp + 6 : NULL);
	else if (cp[7] == ch || !cp[7])
		return ((cp[7] || !ch) ? cp + 7 : NULL);
	return (NULL);
}

static int			align(const char **str2, const char ch)
{
	const char	*str;

	str = *str2;
	while (((uint64_t)str & (sizeof(uint64_t) - 1)) != 0)
	{
		if (*str == ch)
		{
			*str2 = str;
			return (1);
		}
		else if (!*str)
		{
			*str2 = NULL;
			return (1);
		}
		++str;
	}
	*str2 = str;
	return (0);
}

char				*ft_strchr(const char *str, int c)
{
	uint64_t		*s;
	const char		ch = (const char)c;
	uint64_t		magic;
	const uint64_t	himagic = ((0x80808080L << 16) << 16) | 0x80808080L;
	const uint64_t	lomagic = ((0x01010101L << 16) << 16) | 0x01010101L;

	if (align(&str, ch))
		return ((char *)str);
	magic = ch | (ch << 8) | (ch << 16) | (ch << 24);
	magic = ~(((magic << 16) << 16) | magic);
	s = (uint64_t *)str;
	while (42)
	{
		if (((~(*s++ ^ magic)) - lomagic) & himagic)
		{
			if ((str = ft_strchr_bis((const char *)(s - 1), ch)) != NULL)
				return ((char *)str);
		}
		if ((*(s - 1) - lomagic) & himagic)
		{
			if ((str = ft_strchr_bis((const char *)(s - 1), 0)) != NULL)
				return (NULL);
		}
	}
	return (NULL);
}
