/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 10:11:50 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 10:11:52 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"
#include "ft_common.h"

const char	*g_hexmap = "0123456789abcdefABCDEF";

static t_bool	f_perform_hexa(t_sstream *ss, int i, int j, t_bool first)
{
	char	value;

	value = ((i >> (sizeof(int) * 8 - 4)) & 0xF);
	value = (ss->v_upper && value > 9) ? value + 6 : value;
	if (!first || (first && (value || j == sizeof(int) * 2 - 1)))
	{
		ft_string_appc(ss->str, g_hexmap[(int)value]);
		first = false;
	}
	return (first);
}

static void		f_fill_zero(t_sstream *ss, int i, size_t n)
{
	if (i && ss->v_alternate_form)
		n -= 2;
	while (n < ss->v_precision)
	{
		ft_string_appc(ss->str, '0');
		++n;
	}
}

t_sstream		*ft_sstream_addx(t_sstream *ss, int i)
{
	const size_t	n = ft_sstream_count_hexa(ss, i, sizeof(int));
	t_bool			first;
	size_t			j;
	size_t			reserve;

	first = true;
	if (i && ss->v_alternate_form)
		reserve = (n - 2 < ss->v_precision) ? ss->v_precision + 2 : n;
	else
		reserve = (n < ss->v_precision) ? ss->v_precision : n;
	ft_sstream_get_alignement(ss, reserve, false);
	j = 0;
	if (i && ss->v_alternate_form && ss->v_upper)
		ft_string_appn(ss->str, "0X", 2);
	else if (i && ss->v_alternate_form)
		ft_string_appn(ss->str, "0x", 2);
	f_fill_zero(ss, i, n);
	while (j < sizeof(int) * 2)
	{
		first = f_perform_hexa(ss, i, j, first);
		i <<= 4;
		++j;
	}
	ft_sstream_get_alignement(ss, reserve, true);
	return (ft_sstream_reset_modifiers(ss));
}
