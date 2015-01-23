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

t_sstream	*ft_sstream_addx(t_sstream *ss, int i)
{
	t_bool	first;
	char	value;
	size_t	j;

	first = true;
	ft_sstream_check_reserve(ss, sizeof(int) * 2);
	j = 0;
	while (j < sizeof(int) * 2)
	{
		value = ((i >> (sizeof(int) * 8 - 4)) & 0xF);
		value = (ss->v_upper && value > 9) ? value + 6 : value;
		if (!first || (first && value))
		{
			if (!first || value)
			{
				ft_sstream_addc(ss, g_hexmap[(int)value]);
				first = false;
			}
		}
		i <<= 4;
		++j;
	}
	ss->v_upper = false;
	return (ss);
}
