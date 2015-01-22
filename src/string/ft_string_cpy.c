/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_cpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:52 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:52 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

t_string	*ft_string_cpy(const t_string *s)
{
	t_string	*news;

	news = ft_string_newr(s->size);
	if (news)
		ft_string_appn(news, s->str, s->size);
	return (news);
}
