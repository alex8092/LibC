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

	if (n + 1 < ss->v_min_field_width)
	{
		ft_sstream_check_reserve(ss, ss->v_min_field_width);
		index = n + 1;
		while (index < ss->v_min_field_width)
		{
			ft_string_appc(ss->str, ss->v_char_fill);
			++index;
		}
	}
	else
		ft_sstream_check_reserve(ss, n + 1);
	ft_string_appc(ss->str, '-');
	ft_sstream_intern_ui(ss, (unsigned long int)-i, n);
	return (ft_sstream_reset_modifiers(ss));
}

t_sstream	*ft_sstream_addl(t_sstream *ss, long int i)
{
	if (i < 0)
		return (f_sstream_addl_neg(ss, i));
	return (ft_sstream_addul(ss, (unsigned long int)i));
}
