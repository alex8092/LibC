/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_news.c                                   :+:      :+:    :+:   */
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

t_string		*ft_string_news(const char *str)
{
	t_string	*s;

	s = ft_string_new();
	if (s)
	{
		ft_string_reserve(s, ft_strlen(str));
		s->str = ft_strncpy(s->str, str, s->reserve);
		s->size = s->reserve;
		s->str[s->size] = 0;
	}
	return (s);
}
