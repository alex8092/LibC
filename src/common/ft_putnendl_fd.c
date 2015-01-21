/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnendl_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:28 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:28 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

void	ft_putnendl_fd(char *str, int fd, size_t n)
{
	ssize_t	ret;

	ret = write(fd, str, n);
	ret = write(fd, "\n", 1);
	(void)ret;
}
