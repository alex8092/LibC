/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:41:30 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:41:30 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"
#include "ft_common.h"
#include <stdlib.h>

static void	f_init_2(t_sstream *ss)
{
	ss->addx = ft_sstream_addx;
	ss->addlx = ft_sstream_addlx;
	ss->addo = ft_sstream_addo;
	ss->addlo = ft_sstream_addlo;
	ss->addwn = ft_sstream_addwn;
	ss->addll = ft_sstream_addll;
	ss->addull = ft_sstream_addull;
	ss->addllx = ft_sstream_addllx;
	ss->addllo = ft_sstream_addllo;
	ft_sstream_reset_modifiers(ss);
}

t_sstream	*ft_sstream_new(void)
{
	t_sstream	*ss;

	ss = (t_sstream *)ft_memalloc(sizeof(t_sstream));
	if (ss)
	{
		ss->str = ft_string_newr(1);
		if (!ss->str)
		{
			free(ss);
			return (0);
		}
		ss->clear = ft_sstream_clear;
		ss->add = ft_sstream_add;
		ss->addw = ft_sstream_addw;
		ss->addn = ft_sstream_addn;
		ss->addc = ft_sstream_addc;
		ss->adds = ft_sstream_adds;
		ss->addui = ft_sstream_addui;
		ss->addi = ft_sstream_addi;
		ss->addul = ft_sstream_addul;
		ss->addl = ft_sstream_addl;
		f_init_2(ss);
	}
	return (ss);
}
