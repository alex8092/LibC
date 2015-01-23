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

static void	f_get_alignment(t_sstream *ss, size_t n)
{
	size_t	index;

	if (n < ss->v_min_field_width)
	{
		index = n;
		while (index < ss->v_min_field_width)
		{
			ft_string_appc(ss->str, ss->v_char_fill);
			++index;
		}
	}
	else
		ft_sstream_check_reserve(ss, n);
}

t_sstream	*ft_sstream_addx(t_sstream *ss, int i)
{
	const size_t	n = ft_sstream_count_hexa(ss, i, sizeof(int) * 2);
	t_bool			first;
	char			value;
	size_t			j;

	first = true;
	f_get_alignment(ss, n);
	j = 0;
	if (i && ss->v_alternate_form && ss->v_upper)
		ft_string_appn(ss->str, "0X", 2);
	else if (i && ss->v_alternate_form)
		ft_string_appn(ss->str, "0x", 2);
	while (j < sizeof(int) * 2)
	{
		value = ((i >> (sizeof(int) * 8 - 4)) & 0xF);
		value = (ss->v_upper && value > 9) ? value + 6 : value;
		if (!first || (first && (value || j == sizeof(int) * 2 - 1)))
		{
			ft_sstream_addc(ss, g_hexmap[(int)value]);
			first = false;
		}
		i <<= 4;
		++j;
	}
	return (ft_sstream_reset_modifiers(ss));
}
