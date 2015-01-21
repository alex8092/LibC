/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:26 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:26 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <stdlib.h>

void	*ft_memalloc(size_t n)
{
	char	*ptr;

	ptr = (char *)malloc(n);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, n);
	return ((void *)ptr);
}
