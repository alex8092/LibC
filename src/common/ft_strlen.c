/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:29 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:29 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <limits.h>
#include <stdint.h>

static size_t	strlen_bis(const char *str, const char *cp)
{
	if (!cp[0])
		return (cp - str);
	else if (!cp[1])
		return (cp - str + 1);
	else if (!cp[2])
		return (cp - str + 2);
	else if (!cp[3])
		return (cp - str + 3);
	else if (!cp[4])
		return (cp - str + 4);
	else if (!cp[5])
		return (cp - str + 5);
	else if (!cp[6])
		return (cp - str + 6);
	else if (!cp[7])
		return (cp - str + 7);
	return (-1);
}

size_t			ft_strlen(const char *str)
{
	const uint64_t	*s;
	const uint64_t	himagic = ((0x80808080L << 16) << 16) | 0x80808080L;
	const uint64_t	lomagic = ((0x01010101L << 16) << 16) | 0x01010101L;
	uint64_t		test;
	char			*tmp;

	tmp = (char *)str;
	while (((uint64_t)tmp & (sizeof(uint64_t) - 1)) != 0)
	{
		if (!*tmp)
			return (tmp - str);
		++tmp;
	}
	s = (uint64_t *)tmp;
	while (42)
	{
		if (((*s++ - lomagic) & himagic) != 0)
		{
			if ((test = strlen_bis(str, (const char *)(s - 1))) != (size_t)-1)
				return (test);
		}
	}
}
