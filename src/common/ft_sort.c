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

#define NORME_HACK size_t	r[] = { 0, 0, len - 1, 1 }

static void		ft_swap(char **tab, size_t i, size_t j)
{
	char	*str;

	str = tab[i];
	tab[i] = tab[j];
	tab[j] = str;
}

static size_t	ft_sort_bis(char **tab, size_t len, int (*cmp)())
{
	NORME_HACK;
	if (len < 2)
		return (0);
	while ((r[1] < len / 2 && r[2] > 0) || (r[2] > len / 2 && r[1] < len))
	{
		if (r[3] == 1 && cmp(tab[r[0]], tab[r[2]]) > 0)
		{
			ft_swap(tab, r[0], r[2]);
			r[0] = r[2]--;
			r[3] = 2;
		}
		else if (r[3] == 2 && cmp(tab[r[1]], tab[r[0]]) > 0)
		{
			ft_swap(tab, r[0], r[1]);
			r[0] = r[1]--;
			r[3] = 1;
		}
		r[2] = (r[3] == 1) ? r[2] - 1 : r[2];
		r[1] = (r[3] != 1) ? r[1] + 1 : r[1];
	}
	ft_sort_bis(tab, r[0], cmp);
	ft_sort_bis(tab + r[0] + 1, len - r[0] - 1, cmp);
	return (0);
}

char			**ft_sort(char **tab, int (*cmp)())
{
	size_t	i;

	i = 0;
	while (tab[i])
		++i;
	if (cmp != NULL)
		ft_sort_bis(tab, i, cmp);
	else
		ft_sort_bis(tab, i, ft_strcmp);
	return (tab);
}
