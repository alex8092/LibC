/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_newr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:53 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:53 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_common.h"
#include <stdlib.h>

t_string	*ft_string_newr(size_t reserve)
{
	t_string	*s;

	s = ft_string_new();
	if (s)
		ft_string_reserve(s, reserve);
	return (s);
}
