/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:29 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:29 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <stdlib.h>
#include <stdint.h>

char	*ft_strdup(const char *s)
{
	char			*str;
	const size_t	len = ft_strlen(s);

	str = malloc(len + 1);
	return ((str) ? (char *)ft_memcpy(str, s, len + 1) : NULL);
}
