/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_substr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:54 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:54 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_common.h"

t_string	*ft_string_substr(const t_string *s, size_t index, size_t size)
{
	t_string	*news;

	news = ft_string_newr(size);
	if (news)
	{
		ft_string_appn(news, s->str + index, size);
	}
	return (news);
}
