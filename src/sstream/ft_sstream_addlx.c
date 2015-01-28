/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addlx.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 10:12:02 by amerle            #+#    #+#             */
/*   Updated: 2015/01/28 06:06:09 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"
#include "ft_common.h"

extern const char	*g_hexmap;

static t_bool	f_perform_hexa(t_sstream *ss, long int i, int j, t_bool first)
{
	char	val;

	val = ((i >> (sizeof(long int) * 8 - 4)) & 0xF);
	val = (ss->v_upper && val > 9) ? val + 6 : val;
	if (!first || (first && (val || j == sizeof(long int) * 2 - 1)))
	{
		ft_string_appc(ss->str, g_hexmap[(int)val]);
		first = false;
	}
	return (first);
}

static void		f_fill_zero(t_sstream *ss, long int i, size_t n)
{
	if (i && ss->v_alternate_form)
		n -= 2;
	while (n < ss->v_precision)
	{
		ft_string_appc(ss->str, '0');
		++n;
	}
}

t_sstream		*ft_sstream_addlx(t_sstream *ss, long int i)
{
	const size_t	n = ft_sstream_count_hexa(ss, i, sizeof(long int));
	const char		*add_str;
	t_bool			first;
	size_t			j;
	size_t			reserve;

	first = true;
	add_str = (ss->v_upper) ? "0X" : "0x";
	if (i && ss->v_alternate_form)
		reserve = (n - 2 < ss->v_precision) ? ss->v_precision + 2 : n;
	else
		reserve = (n < ss->v_precision) ? ss->v_precision : n;
	ft_sstream_get_alignement(ss, reserve, false);
	j = 0;
	if (i && ss->v_alternate_form)
		ft_string_appn(ss->str, add_str, 2);
	f_fill_zero(ss, i, n);
	while (j < sizeof(long int) * 2)
	{
		first = f_perform_hexa(ss, i, j, first);
		i <<= 4;
		++j;
	}
	ft_sstream_get_alignement(ss, reserve, true);
	return (ft_sstream_reset_modifiers(ss));
}
