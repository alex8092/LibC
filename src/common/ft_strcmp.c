/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:28 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:29 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <stdint.h>

static int	ft_cmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

static int	ft_zero(const char *s)
{
	if (!s[0] || !s[1] || !s[2] || !s[3] || !s[4] || !s[5] || !s[6] || !s[7])
		return (1);
	return (0);
}

int			ft_strcmp(const char *s1, const char *s2)
{
	const uint64_t	himagic = ((0x80808080L << 16) << 16) | 0x80808080L;
	const uint64_t	lomagic = ((0x01010101L << 16) << 16) | 0x01010101L;
	const uint64_t	*i1;
	const uint64_t	*i2;

	i1 = (const uint64_t *)s1;
	i2 = (const uint64_t *)s2;
	while (42)
	{
		if (*i1 != *i2)
			return (ft_cmp((const char *)(i1), (const char *)(i2)));
		if (((*i1++ - lomagic) & himagic) && ft_zero((const char *)(i1 - 1)))
			return (ft_cmp((const char *)(i1 - 1), (const char *)i2));
		else if (((*i2++ - lomagic) & himagic)
					&& ft_zero((const char *)(i2 - 1)))
			return (ft_cmp((const char *)(i1 - 1), (const char *)(i2 - 1)));
	}
}
