/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:29:42 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 11:29:44 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"
#include "ft_common.h"
#include <stdio.h>

static char	f_get_val(int i, int j)
{
	if (j == sizeof(int) * 8 - sizeof(int) * 8 % 3)
		return ((i >> j) & 0x3);
	else
		return ((i >> j) & 0x7);
}

t_sstream	*ft_sstream_addo(t_sstream *ss, int i)
{
	t_bool	first;
	char	val;
	int		j;

	first = true;
	ft_sstream_check_reserve(ss, sizeof(int) * 8 / 3);
	if (i && ss->v_alternate_form)
		ft_string_appc(ss->str, '0');
	j = sizeof(int) * 8 - sizeof(int) * 8 % 3;
	while (j >= 0)
	{
		val = f_get_val(i, j);
		if (!first || (first && (val || j == 0)))
		{
			if (!first || val || j == 0)
			{
				ft_string_appc(ss->str, val + '0');
				first = false;
			}
		}
		j -= 3;
	}
	return (ft_sstream_reset_modifiers(ss));
}
