/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:29 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:29 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	return ((char *)ft_memcpy((void *)dest, (const void *)src, n));
}
