/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addllo.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 06:04:43 by amerle            #+#    #+#             */
/*   Updated: 2015/01/28 06:04:56 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

#define SSTREAM_LLOCT_SIZE	sizeof(long long) * 8 - sizeof(long long) * 8 % 3

static char	f_get_val(long long i, int j)
{
	if (j == SSTREAM_LLOCT_SIZE)
		return ((i >> j) & 0x1);
	else
		return ((i >> j) & 0x7);
}

static void	f_fill_zero(t_sstream *ss, size_t n)
{
	while (n < ss->v_precision)
	{
		ft_string_appc(ss->str, '0');
		++n;
	}
}

t_sstream	*ft_sstream_addllo(t_sstream *ss, long long i)
{
	const size_t	n = ft_sstream_count_octal(ss, i, SSTREAM_LLOCT_SIZE, 0x1);
	t_bool			first;
	char			val;
	int				j;
	size_t			reserve;

	first = true;
	reserve = (n < ss->v_precision) ? ss->v_precision : n;
	ft_sstream_get_alignement(ss, reserve, false);
	if (i && ss->v_alternate_form)
		ft_string_appc(ss->str, '0');
	f_fill_zero(ss, n);
	j = SSTREAM_LLOCT_SIZE;
	while (j >= 0)
	{
		val = f_get_val(i, j);
		if (!first || (first && (val || j == 0)))
		{
			ft_string_appc(ss->str, val + '0');
			first = false;
		}
		j -= 3;
	}
	ft_sstream_get_alignement(ss, reserve, true);
	return (ft_sstream_reset_modifiers(ss));
}
