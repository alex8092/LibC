/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:30 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:30 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

static t_sstream	*f_sstream_addl_neg(t_sstream *ss, long int i)
{
	const size_t	n = ft_sstream_count_digits((unsigned long int)-i);
	size_t			index;
	size_t			reserve;

	reserve = (n < ss->v_precision) ? ss->v_precision : n;
	ft_sstream_get_alignement(ss, reserve + 1, false);
	ft_string_appc(ss->str, '-');
	index = n;
	while (index < ss->v_precision)
	{
		ft_string_appc(ss->str, '0');
		++index;
	}
	ft_sstream_intern_ui(ss, (unsigned long int)-i, n);
	ft_sstream_get_alignement(ss, reserve + 1, true);
	return (ft_sstream_reset_modifiers(ss));
}

t_sstream			*ft_sstream_addl(t_sstream *ss, long int i)
{
	if (i < 0)
		return (f_sstream_addl_neg(ss, i));
	return (ft_sstream_addul(ss, (unsigned long int)i));
}
