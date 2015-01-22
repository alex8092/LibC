/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:38:45 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:38:45 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printer.h"
#include "ft_common.h"

t_printer	*ft_printer(void)
{
	static t_printer	inst;
	static t_bool		init = false;

	if (!init)
	{
		ft_bzero((void *)&inst, sizeof(t_printer));
		inst.init = ft_printer_init;
		inst.autoflush = ft_printer_autoflush;
		inst.add = ft_printer_add;
		inst.addn = ft_printer_addn;
		inst.adds = ft_printer_adds;
		inst.addss = ft_printer_addss;
		inst.addc = ft_printer_addc;
		inst.flushn = ft_printer_flushn;
		inst.flush = ft_printer_flush;
		init = true;
	}
	return (&inst);
}
