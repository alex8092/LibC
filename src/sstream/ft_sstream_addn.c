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
	if (ss->v_precision != 0 && n > ss->v_precision)
		n = ss->v_precision;
	ft_sstream_get_alignement(ss, n, false);
	ft_string_appn(ss->str, str, n);
	ft_sstream_get_alignement(ss, n, true);
	return (ft_sstream_reset_modifiers(ss));
}
