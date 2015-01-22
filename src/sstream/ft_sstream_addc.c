/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:29 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:29 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

t_sstream	*ft_sstream_addc(t_sstream *ss, const char c)
{
	ft_sstream_check_reserve(ss, 1);
	ft_string_appn(ss->str, &c, 1);
	return (ss);
}
