/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addlx.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 10:12:02 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 10:12:03 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"
#include "ft_common.h"

extern const char	*g_hexmap;

t_sstream		*ft_sstream_addlx(t_sstream *ss, long int i)
{
	t_bool	first;
	char	val;
	size_t	j;

	first = true;
	ft_sstream_check_reserve(ss, sizeof(long int) * 2);
	j = 0;
	while (j < sizeof(long int) * 2)
	{
		val = ((i >> (sizeof(long int) * 8 - 4)) & 0xF);
		if (!first || (first && val))
		{
			if (!first || val)
			{
				ft_sstream_addc(ss, g_hexmap[(int)val]);
				first = false;
			}
		}
		i <<= 4;
		++j;
	}
	return (ft_sstream_reset_modifiers(ss));
}
