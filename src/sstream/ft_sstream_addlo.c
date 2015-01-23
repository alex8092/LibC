/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addlo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:29:50 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 11:29:52 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"
#include "ft_common.h"

static char	f_get_val(long int i, int j)
{
	if (j == sizeof(long int) * 8 - sizeof(long int) * 8 % 3)
		return ((i >> j) & 0x1);
	else
		return ((i >> j) & 0x7);
}

t_sstream	*ft_sstream_addlo(t_sstream *ss, long int i)
{
	t_bool	first;
	char	val;
	int		j;

	first = true;
	ft_sstream_check_reserve(ss, sizeof(long int) * 8 / 3);
	j = sizeof(long int) * 8 - sizeof(long int) * 8 % 3;
	if (i && ss->v_alternate_form)
		ft_string_appc(ss->str, '0');
	while (j >= 0)
	{
		val = f_get_val(i, j);
		if (!first || (first && val))
		{
			if (!first || val)
			{
				ft_string_appc(ss->str, val + '0');
				first = false;
			}
		}
		j -= 3;
	}
	return (ft_sstream_reset_modifiers(ss));
}
