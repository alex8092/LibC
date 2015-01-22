/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_adds.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:30 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:30 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream.h"

t_sstream	*ft_sstream_adds(t_sstream *ss, t_string *str)
{
	return (ft_sstream_addn(ss, str->str, str->size));
}
