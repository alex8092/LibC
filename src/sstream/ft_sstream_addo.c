/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:29:42 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 11:29:44 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"
#include "ft_common.h"
#include <stdio.h>

t_sstream	*ft_sstream_addo(t_sstream *ss, int i)
{
	t_bool	first;
	char	val;
	int		j;

	first = true;
	ft_sstream_check_reserve(ss, sizeof(int) * 8 / 3);
	j = sizeof(int) * 8 - sizeof(int) * 8 % 3;
	while (j >= 0)
	{
		if (j == sizeof(int) * 8 - sizeof(int) * 8 % 3)
			val = (i >> j) & 0x3;
		else
			val = (i >> j) & 0x7;
		if (!first || (first && val))
		{
			if (!first || val)
			{
				ft_sstream_addc(ss, val + '0');
				first = false;
			}
		}
		j -= 3;
	}
	return (ss);
}
