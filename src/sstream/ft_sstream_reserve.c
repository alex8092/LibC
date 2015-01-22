/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_reserve.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:31 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:31 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

t_sstream	*ft_sstream_reserve(t_sstream *ss, size_t size)
{
	if (ss->str->size < size)
		ft_sstream_check_reserve(ss, ss->str->size - size);
	return (ss);
}
