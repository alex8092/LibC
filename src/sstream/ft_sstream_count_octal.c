/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_count_octal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 06:08:35 by amerle            #+#    #+#             */
/*   Updated: 2015/01/28 06:08:37 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

static char	f_get_val(long long i, int j, size_t n, char mask)
{
	if (j == (int)n)
		return ((i >> j) & mask);
	else
		return ((i >> j) & 0x7);
}

size_t		ft_sstream_count_octal(t_sstream *ss, long long i, size_t n,\
									char mask)
{
	size_t	count;
	int		j;
	char	val;
	t_bool	first;

	first = true;
	count = (i && ss->v_alternate_form) ? 1 : 0;
	j = (int)n;
	while (j >= 0)
	{
		val = f_get_val(i, j, n, mask);
		if (!first || (first && (val || j == 0)))
		{
			++count;
			first = false;
		}
		j -= 3;
	}
	return (count);
}
