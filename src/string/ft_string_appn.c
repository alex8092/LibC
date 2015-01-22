/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_appn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:52 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:52 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_common.h"

t_string	*ft_string_appn(t_string *s, const char *str, size_t size)
{
	if (s->size + size > s->reserve)
		ft_string_reserve(s, s->size + size);
	ft_strncpy(s->str + s->size, str, size);
	s->size += size;
	s->str[s->size] = 0;
	return (s);
}
