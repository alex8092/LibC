/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:26 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:26 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <stdint.h>

static void		ft_memcpy_opti(char *dest, const char *src, size_t n)
{
	uint64_t		*d;
	const uint64_t	*s;
	size_t			i;

	d = (uint64_t *)dest;
	s = (const uint64_t *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		++i;
	}
}

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	s = (const char *)src;
	d = (char *)dest;
	ft_memcpy_opti(dest, src, n / sizeof(uint64_t));
	i = n - (n % sizeof(uint64_t));
	while (i < n)
	{
		d[i] = s[i];
		++i;
	}
	return (dest);
}
