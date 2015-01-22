/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_check_reserve.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:30 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:30 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

void	ft_sstream_check_reserve(t_sstream *ss, size_t size)
{
	size_t	newreserve;

	if (ss->str->size + size > ss->str->reserve)
	{
		newreserve = ss->str->reserve;
		if (!newreserve)
			newreserve = 1;
		while (ss->str->size + size > newreserve)
			newreserve *= 2;
		ft_string_reserve(ss->str, newreserve);
	}
}
