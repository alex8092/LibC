/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:30 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:30 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <stdlib.h>

char	*ft_strsub(char *str, size_t start, size_t len)
{
	char	*s;

	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	return ((char *)ft_memcpy(s, str + start, len));
}
