/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_del.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:30 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:30 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream.h"
#include <stdlib.h>

void	ft_sstream_del(t_sstream *ss)
{
	if (ss->str)
		ft_string_del(ss->str);
	free(ss);
}
