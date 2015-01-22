/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer_flushn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:38:46 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:38:46 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"

t_printer	*ft_printer_flushn(size_t size)
{
	static t_printer	*inst = 0;
	ssize_t				ret;

	if (!inst)
		inst = ft_printer();
	ret = write(inst->fd, inst->buffer, size);
	(void)ret;
	inst->size -= size;
	ft_strncpy(inst->buffer, inst->buffer + size, inst->size + 1);
	return (inst);
}
