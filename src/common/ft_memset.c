/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:27 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:27 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <stdint.h>

static size_t	ft_memset_bis(char *ptr, const char c, size_t n)
{
	uint64_t		*s;
	size_t			i;
	uint64_t		magic;

	s = (uint64_t *)ptr;
	magic = c | (c << 8) | (c << 16) | (c << 24);
	magic = ((magic << 16) << 16) | magic;
	i = 0;
	while (i < n)
	{
		s[i] = magic;
		++i;
	}
	return (i * sizeof(uint64_t));
}

void			*ft_memset(void *ptr, int c, size_t n)
{
	char	*s;
	size_t	i;

	s = (char *)ptr;
	i = ft_memset_bis(s, (const char)c, n / sizeof(uint64_t));
	while (i < n)
	{
		s[i] = (const char)c;
		++i;
	}
	return (ptr);
}
