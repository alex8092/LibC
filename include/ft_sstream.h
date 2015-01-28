/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstream.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:52:48 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:52:49 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSTREAM_H
# define FT_SSTREAM_H

# include "ft_string.h"
# include "ft_common.h"
# include <wchar.h>

typedef struct s_sstream	t_sstream;

struct			s_sstream
{
	t_string	*str;
	t_bool		v_upper;
	t_bool		v_alternate_form;
	size_t		v_min_field_width;
	size_t		v_precision;
	char		v_char_fill;
	t_bool		v_always_sign;
	t_bool		v_left_align;
	t_bool		v_space_or_sign;
	t_sstream	*(*clear)(t_sstream*);
	t_sstream	*(*add)(t_sstream*, const char *);
	t_sstream	*(*addw)(t_sstream*, const wchar_t *);
	t_sstream	*(*addwn)(t_sstream*, const wchar_t *, size_t);
	t_sstream	*(*addn)(t_sstream*, const char *, size_t);
	t_sstream	*(*addc)(t_sstream*, const char);
	t_sstream	*(*adds)(t_sstream*, t_string*);
	t_sstream	*(*addui)(t_sstream*, unsigned int);
	t_sstream	*(*addi)(t_sstream*, int);
	t_sstream	*(*addul)(t_sstream*, unsigned long int);
	t_sstream	*(*addull)(t_sstream*, unsigned long long);
	t_sstream	*(*addl)(t_sstream*, long int);
	t_sstream	*(*addll)(t_sstream*, long long);
	t_sstream	*(*addx)(t_sstream*, int);
	t_sstream	*(*addlx)(t_sstream*, long int);
	t_sstream	*(*addllx)(t_sstream*, long long);
	t_sstream	*(*addo)(t_sstream*, int);
	t_sstream	*(*addlo)(t_sstream*, long int);
	t_sstream	*(*addllo)(t_sstream*, long long);
};

t_sstream		*ft_sstream_new(void);
t_sstream		*ft_sstream_clear(t_sstream *ss);
t_sstream		*ft_sstream_add(t_sstream *ss, const char *str);
t_sstream		*ft_sstream_addw(t_sstream *ss, const wchar_t *str);
t_sstream		*ft_sstream_addwn(t_sstream *ss, const wchar_t *str,\
								size_t size);
t_sstream		*ft_sstream_addn(t_sstream *ss, const char *str, size_t size);
t_sstream		*ft_sstream_addc(t_sstream *ss, const char c);
t_sstream		*ft_sstream_adds(t_sstream *ss, t_string *str);
t_sstream		*ft_sstream_addui(t_sstream *ss, unsigned int i);
t_sstream		*ft_sstream_addi(t_sstream *ss, int i);
t_sstream		*ft_sstream_addl(t_sstream *ss, long int i);
t_sstream		*ft_sstream_addll(t_sstream *ss, long long i);
t_sstream		*ft_sstream_addul(t_sstream *ss, unsigned long int i);
t_sstream		*ft_sstream_addull(t_sstream *ss, unsigned long long i);
t_sstream		*ft_sstream_addx(t_sstream *ss, int i);
t_sstream		*ft_sstream_addo(t_sstream *ss, int i);
t_sstream		*ft_sstream_addlo(t_sstream *ss, long int i);
t_sstream		*ft_sstream_addllo(t_sstream *ss, long long i);
t_sstream		*ft_sstream_addlx(t_sstream *ss, long int i);
t_sstream		*ft_sstream_addllx(t_sstream *ss, long long i);
t_sstream		*ft_sstream_reserve(t_sstream *ss, size_t size);
t_sstream		*ft_sstream_reset_modifiers(t_sstream *ss);
void			ft_sstream_del(t_sstream *ss);

#endif
