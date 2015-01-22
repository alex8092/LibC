/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_insertn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:53 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:53 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_common.h"

t_string	*ft_string_insertn(t_string *s, const char *str, size_t size,\
				size_t index)
{
	size_t			i;

	if (s->size + size > s->reserve)
		ft_string_reserve(s, s->size + size);
	i = s->size + size - 1;
	while (i > index + size - 1)
	{
		s->str[i] = s->str[i - size];
		--i;
	}
	i = 0;
	while (i < size)
	{
		s->str[index + i] = str[i];
		++i;
	}
	s->size += size;
	s->str[s->size] = 0;
	return (s);
}
