/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream_private.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:52:51 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:52:52 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSTREAM_PRIVATE_H
# define FT_SSTREAM_PRIVATE_H

# include "ft_sstream.h"

void			ft_sstream_get_alignement(t_sstream *ss, size_t n, t_bool end);
void			ft_sstream_intern_ui(t_sstream *s, unsigned long long i,\
				size_t n);
size_t			ft_sstream_count_digits(unsigned long long i);
size_t			ft_sstream_count_hexa(t_sstream *ss, long long i, size_t n);
size_t			ft_sstream_count_octal(t_sstream *ss, long long i, size_t n,\
										char mask);
void			ft_sstream_check_reserve(t_sstream *s, size_t size);

#endif
