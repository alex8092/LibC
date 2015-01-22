/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_clearfree.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:45:40 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:45:40 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

t_vector	*ft_vector_clearfree(t_vector *v, void (*freefunc)())
{
	size_t	i;

	i = 0;
	while (i < v->size)
	{
		if (v->ptr[i])
			freefunc(v->ptr[i]);
		++i;
	}
	return (ft_vector_clear(v));
}
