/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addul.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:30 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:30 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

static size_t	f_count_digits(unsigned long int i)
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

t_sstream		*ft_sstream_addul(t_sstream *ss, unsigned long int i)
{
	const size_t	n = f_count_digits(i);
	char			nstr[n];
	size_t			index;

	ft_sstream_check_reserve(ss, 22);
	index = 0;
	while (index < n)
	{
		nstr[n - index - 1] = (i % 10) + '0';
		i /= 10;
		++index;
	}
	ft_string_appn(ss->str, nstr, n);
	return (ss);
}
