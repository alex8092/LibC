/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:53 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:53 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_common.h"

t_string	*ft_string_new(void)
{
	t_string	*s;

	s = (t_string *)ft_memalloc(sizeof(t_string));
	return (s);
}
