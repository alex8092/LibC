/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_addl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:30 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:30 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

t_sstream	*ft_sstream_addl(t_sstream *ss, long int i)
{
	ft_sstream_check_reserve(ss, 22);
	if (i < 0)
	{
		ft_string_appn(ss->str, "-", 1);
		return (ft_sstream_addul(ss, -i));
	}
	return (ft_sstream_addul(ss, i));
}
