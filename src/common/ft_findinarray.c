/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findinarray.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:26 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:55 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

int	ft_findinarray(char *array, char c)
{
	char	*s;

	if ((s = ft_strchr(array, c)))
		return (s - array);
	return (-1);
}
