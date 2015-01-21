/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:27 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:27 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <stdlib.h>

void	*ft_memdup(const void *src, size_t n)
{
	void	*ptr;

	if (!(ptr = malloc(n)))
		return (NULL);
	return (ft_memcpy(ptr, src, n));
}
