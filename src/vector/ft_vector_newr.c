/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_newr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:45:40 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:45:40 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "ft_common.h"

t_vector	*ft_vector_newr(size_t reserve)
{
	t_vector	*v;
	size_t		real_reserve;

	v = ft_vector_new();
	if (v)
	{
		real_reserve = 1;
		while (real_reserve < reserve)
			real_reserve *= 2;
		v->ptr = (void **)ft_memalloc(sizeof(void *) * (real_reserve));
		v->reserve = real_reserve;
	}
	return (v);
}
