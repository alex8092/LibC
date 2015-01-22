/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer_addss.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:38:45 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:38:45 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

t_printer	*ft_printer_addss(t_sstream *ss)
{
	return (ft_printer_addn(ss->str->str, ss->str->size));
}
