/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:38:46 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:38:46 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

t_printer	*ft_printer_init(int fd)
{
	static t_printer	*inst = 0;

	if (!inst)
		inst = ft_printer();
	if (inst->fd != fd)
	{
		if (inst->size)
			ft_printer_flush();
		inst->fd = fd;
	}
	return (inst);
}
