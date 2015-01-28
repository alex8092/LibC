/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_intern_ui.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 06:08:54 by amerle            #+#    #+#             */
/*   Updated: 2015/01/28 06:08:55 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

void	ft_sstream_intern_ui(t_sstream *ss, unsigned long long i, size_t n)
{
	size_t			index;
	char			nstr[n];

	index = 0;
	while (index < n)
	{
		nstr[n - index - 1] = (i % 10) + '0';
		i /= 10;
		++index;
	}
	ft_string_appn(ss->str, nstr, n);
}
