/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer_autoflush.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:38:45 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:54:01 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

t_printer	*ft_printer_autoflush(t_bool active)
{
	static t_printer	*inst = 0;

	if (!inst)
		inst = ft_printer();
	inst->v_autoflush = active;
	return (inst);
}
