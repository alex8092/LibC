/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_get_alignement.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 06:08:45 by amerle            #+#    #+#             */
/*   Updated: 2015/01/28 06:08:46 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sstream_private.h"

void	ft_sstream_get_alignement(t_sstream *ss, size_t n, t_bool end)
{
	size_t	index;

	if (n < ss->v_min_field_width)
	{
		if (!end)
			ft_sstream_check_reserve(ss, ss->v_min_field_width);
		if ((!end && ss->v_left_align) || (end && !ss->v_left_align))
			return ;
		index = n;
		while (index < ss->v_min_field_width)
		{
			ft_string_appc(ss->str, ss->v_char_fill);
			++index;
		}
	}
	else if (!end)
		ft_sstream_check_reserve(ss, n);
}
