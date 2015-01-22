/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_erase.c                                  :+:      :+:    :+:   */
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

static void	f_reserve_divide(t_vector *v)
{
	void	**newptr;
	size_t	i;

	if (v->reserve > 1)
	{
		v->reserve /= 2;
		newptr = (void **)malloc(sizeof(void *) * v->reserve);
		i = 0;
		while (i < v->reserve)
		{
			newptr[i] = v->ptr[i];
			++i;
		}
		free(v->ptr);
		v->ptr = newptr;
	}
	else
	{
		v->reserve = 0;
		free(v->ptr);
		v->ptr = 0;
	}
}

t_vector	*ft_vector_erase(t_vector *v, size_t index)
{
	size_t	i;

	i = index + 1;
	while (i < v->size)
	{
		v->ptr[i - 1] = v->ptr[i];
		++i;
	}
	--v->size;
	if (v->size < v->reserve / 2)
		f_reserve_divide(v);
	return (v);
}
