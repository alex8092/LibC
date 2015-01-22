/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addlo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:29:50 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 11:29:52 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"
#include "ft_common.h"

t_sstream	*ft_sstream_addlo(t_sstream *ss, long int i)
{
	t_bool	first;
	char	val;
	int		j;

	first = true;
	ft_sstream_check_reserve(ss, sizeof(long int) * 8 / 3);
	j = sizeof(long int) * 8 - sizeof(long int) * 8 % 3;
	while (j >= 0)
	{
		if (j == sizeof(long int) * 8 - sizeof(long int) * 8 % 3)
			val = (i >> j) & 0x1;
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
