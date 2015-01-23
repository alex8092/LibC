/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addul.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:30 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:30 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

t_sstream		*ft_sstream_addul(t_sstream *ss, unsigned long int i)
{
	const size_t	n = ft_sstream_count_digits(i);
	size_t			index;

	if (n < ss->v_min_field_width)
	{
		ft_sstream_check_reserve(ss, ss->v_min_field_width);
		index = n;
		while (index < ss->v_min_field_width)
		{
			ft_string_appc(ss->str, ss->v_char_fill);
			++index;
		}
	}
	else
		ft_sstream_check_reserve(ss, n);
	ft_sstream_intern_ui(ss, i, n);
	return (ft_sstream_reset_modifiers(ss));
}
