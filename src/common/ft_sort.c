/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:28 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:39:27 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"
#include <string.h>

static size_t	f_tab_len(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
		++i;
	return (i);
}

char			**ft_sort(char **tab, int (*cmp)())
{
	const size_t	size = f_tab_len(tab);
	size_t			i;
	char			*tmp;

	i = 0;
	while (i < size - 1)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			++i;
	}
	return (tab);
}
