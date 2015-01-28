/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_appwc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 06:09:44 by amerle            #+#    #+#             */
/*   Updated: 2015/01/28 06:09:44 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

t_string	*ft_string_appwc(t_string *s, wchar_t c)
{
	if (s->size + sizeof(wchar_t) > s->reserve)
		ft_string_reserve(s, s->size + sizeof(wchar_t));
	ft_string_appn(s, (const char *)&c, sizeof(wchar_t));
	s->size += sizeof(wchar_t);
	s->str[s->size] = 0;
	return (s);
}
