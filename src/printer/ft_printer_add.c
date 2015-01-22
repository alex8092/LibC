/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:38:45 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:38:45 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"
#include "ft_common.h"

t_printer	*ft_printer_add(const char *str)
{
	return (ft_printer_addn(str, ft_strlen(str)));
}
