/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:45:40 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:45:40 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "ft_common.h"

t_vector	*ft_vector_new(void)
{
	t_vector	*v;

	v = (t_vector *)ft_memalloc(sizeof(t_vector));
	return (v);
}
