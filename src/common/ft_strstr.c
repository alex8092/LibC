/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:30 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:30 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

char	*ft_strstr(char *str, const char *find)
{
	char	*tmp;
	size_t	i;

	while ((tmp = ft_strchr(str, find[0])))
	{
		i = 1;
		while (find[i] && find[i] == tmp[i])
			++i;
		if (!find[i])
			return (tmp);
		str = tmp + i;
	}
	return (NULL);
}
