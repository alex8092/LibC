/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:45:40 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:45:40 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "ft_common.h"
#include <stdlib.h>

t_vector	*ft_vector_push(t_vector *v, void *data)
{
	void	**newptr;
	size_t	i;

	if (v->size + 1 > v->reserve)
	{
		if (!v->reserve)
			v->reserve = 1;
		while (v->size + 1 > v->reserve)
			v->reserve *= 2;
		newptr = (void **)ft_memalloc(sizeof(void *) * v->reserve);
		i = 0;
		while (i < v->size)
		{
			newptr[i] = v->ptr[i];
			++i;
		}
		free(v->ptr);
		v->ptr = newptr;
	}
	v->ptr[v->size] = data;
	++v->size;
	return (v);
}
