/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:45:39 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:45:39 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include <stdlib.h>

t_vector	*ft_vector_clear(t_vector *v)
{
	free(v->ptr);
	v->ptr = 0;
	v->reserve = 0;
	v->size = 0;
	return (v);
}
