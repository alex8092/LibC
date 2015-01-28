/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addull.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 06:07:13 by amerle            #+#    #+#             */
/*   Updated: 2015/01/28 06:07:14 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

t_sstream	*ft_sstream_addull(t_sstream *ss, unsigned long long i)
{
	const size_t	n = ft_sstream_count_digits(i);
	const int		add = (ss->v_always_sign || ss->v_space_or_sign) ? 1 : 0;
	size_t			index;
	size_t			reserve;

	reserve = (n < ss->v_precision) ? ss->v_precision : n;
	ft_sstream_get_alignement(ss, reserve + add, false);
	if (add && ss->v_always_sign)
		ft_string_appc(ss->str, '+');
	else if (add && ss->v_space_or_sign)
		ft_string_appc(ss->str, ' ');
	if (n + add < ss->v_precision)
	{
		ft_sstream_check_reserve(ss, ss->v_precision + add);
		index = n;
		while (index < ss->v_precision)
		{
			ft_string_appc(ss->str, '0');
			++index;
		}
	}
	ft_sstream_intern_ui(ss, i, n);
	ft_sstream_get_alignement(ss, reserve + add, true);
	return (ft_sstream_reset_modifiers(ss));
}
