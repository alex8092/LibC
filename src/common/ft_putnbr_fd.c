/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:27 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:37:51 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

static void	ft_putnbr_rec(unsigned long int n, int fd)
{
	char	c;
	ssize_t	ret;

	if (n)
	{
		c = (n % 10) + '0';
		ft_putnbr_rec(n / 10, fd);
		ret = write(fd, &c, 1);
		(void)ret;
	}
}

void		ft_putnbr_fd(long int number, int fd)
{
	ssize_t	ret;

	if (number == 0)
	{
		ret = write(fd, "0", 1);
		return ;
	}
	if (number < 0)
	{
		ret = write(fd, "-", 1);
		ft_putnbr_rec(-number, fd);
	}
	else
		ft_putnbr_rec(number, fd);
	(void)ret;
}
