/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_searchs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:54 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:54 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

ssize_t	ft_string_searchs(t_string *s, t_string *search)
{
	return (ft_string_search(s, search->str));
}
