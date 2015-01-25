/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:26 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:26 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

long int	ft_atoi(const char *number)
{
	unsigned long int	res;
	char				neg;

	neg = (number[0] == '-') ? -1 : 1;
	if (number[0] == '-')
		++number;
	res = 0;
	while (*number && *number >= '0' && *number <= '9')
	{
		res *= 10;
		res += *number - '0';
		++number;
	}
	return (res * neg);
}
