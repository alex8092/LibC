/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_count_hexa.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 06:08:25 by amerle            #+#    #+#             */
/*   Updated: 2015/01/28 06:08:26 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

size_t		ft_sstream_count_hexa(t_sstream *ss, long long i, size_t n)
{
	size_t	count;
	size_t	j;
	char	val;
	t_bool	first;

	first = true;
	count = (i && ss->v_alternate_form) ? 2 : 0;
	j = 0;
	while (j < n * 2)
	{
		val = ((i >> (n * 8 - 4)) & 0xF);
		if (!first || (first && (val || j == n * 2 - 1)))
		{
			++count;
			first = false;
		}
		i <<= 4;
		++j;
	}
	return (count);
}
