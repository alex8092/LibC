/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addn.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:30 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:30 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

t_sstream	*ft_sstream_addn(t_sstream *ss, const char *str, size_t n)
{
	size_t	i;

	if (n < ss->v_min_field_width)
	{
		ft_sstream_check_reserve(ss, ss->v_min_field_width);
		i = n;
		while (i < ss->v_min_field_width)
		{
			ft_string_appc(ss->str, ss->v_char_fill);
			++i;
		}
	}
	else
		ft_sstream_check_reserve(ss, n);
	ft_string_appn(ss->str, str, n);
	return (ft_sstream_reset_modifiers(ss));
}
