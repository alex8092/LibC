/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_reserve.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:53 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:53 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_common.h"
#include <stdlib.h>

t_string	*ft_string_reserve(t_string *s, size_t size)
{
	char	*news;

	news = (char *)ft_memalloc(size + 1);
	if (news)
	{
		if (s->size <= size)
		{
			if (s->str)
				ft_strncpy(news, s->str, s->size);
			news[s->size] = 0;
		}
		else
		{
			if (s->str)
				ft_strncpy(news, s->str, size);
			news[size] = 0;
			s->size = size;
		}
		if (s->str)
			free(s->str);
		s->str = news;
		s->reserve = size;
	}
	return (s);
}
