/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_count_digits.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 06:08:15 by amerle            #+#    #+#             */
/*   Updated: 2015/01/28 06:08:16 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

size_t			ft_sstream_count_digits(unsigned long long i)
{
	size_t	n;

	if (!i)
		return (1);
	n = 0;
	while (i)
	{
		i /= 10;
		++n;
	}
	return (n);
}
