/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:29:42 by amerle            #+#    #+#             */
/*   Updated: 2015/01/28 06:06:23 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"
#include "ft_common.h"

#define SSTREAM_OCT_SIZE	sizeof(int) * 8 - sizeof(int) * 8 % 3

static char	f_get_val(int i, int j)
{
	if (j == SSTREAM_OCT_SIZE)
		return ((i >> j) & 0x3);
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

t_sstream	*ft_sstream_addo(t_sstream *ss, int i)
{
	const size_t	n = ft_sstream_count_octal(ss, i, SSTREAM_OCT_SIZE, 0x3);
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
	j = SSTREAM_OCT_SIZE;
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
