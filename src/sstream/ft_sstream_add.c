/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:29 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:29 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream.h"
#include "ft_common.h"

t_sstream	*ft_sstream_add(t_sstream *ss, const char *str)
{
	return (ft_sstream_addn(ss, str, ft_strlen(str)));
}
