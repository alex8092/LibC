/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:53 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:53 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_common.h"

t_string	*ft_string_replace(t_string *s, size_t index, size_t size,\
								const char *str)
{
	const size_t	size_str = ft_strlen(str);
	char			tmp[s->size - index - size];

	if (s->size - size + size_str > s->reserve)
		ft_string_reserve(s, s->size - size + size_str);
	ft_strncpy(tmp, s->str + index + size, s->size - index - size);
	ft_strncpy(s->str + index, str, size_str);
	ft_strncpy(s->str + index + size_str, tmp, s->size - index - size);
	s->str[s->size - size + size_str] = 0;
	s->size -= size;
	s->size += size_str;
	return (s);
}
