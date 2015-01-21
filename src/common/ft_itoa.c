/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:26 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:26 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <stdlib.h>

char		*ft_itoa(long int nbr)
{
	char		neg;
	char		*str;
	long int	n;
	int			i;

	if (nbr == 0)
		return ("0");
	n = 1;
	i = 0;
	neg = (nbr < 0) ? 1 : 0;
	nbr = (nbr < 0) ? nbr * -1 : nbr;
	while (n <= nbr && ++i)
		n *= 10;
	if ((str = malloc(sizeof(char) * (i + 1))) != NULL)
	{
		str[0] = '-';
		i = neg;
		while (n > 1)
		{
			str[i++] = (nbr % n / (n / 10)) + '0';
			n /= 10;
		}
		str[i] = 0;
	}
	return (str);
}
