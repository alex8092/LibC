/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_searchc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:54 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:54 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_common.h"

ssize_t	ft_string_searchc(t_string *s, const char c)
{
	char	*ptr;

	ptr = ft_strchr(s->str, c);
	if (ptr)
		return (ptr - s->str);
	return (-1);
}
