/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addw.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 09:26:16 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 09:26:18 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream.h"
#include "ft_common.h"

t_sstream	*ft_sstream_addw(t_sstream *ss, const wchar_t *str)
{
	const char	*cstr;

	cstr = (const char *)str;
	return (ft_sstream_addn(ss, cstr, ft_wstrlen(str) * sizeof(wchar_t)));
}
