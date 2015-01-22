/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:52:41 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:53:33 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTER_H
# define FT_PRINTER_H

# include <unistd.h>
# include "ft_string.h"
# include "ft_common.h"
# include "ft_sstream.h"

# define PRINTER_BUFFER_SIZE	4096

typedef struct s_printer	t_printer;

struct			s_printer
{
	char		buffer[PRINTER_BUFFER_SIZE];
	size_t		size;
	int			fd;
	t_bool		v_autoflush;
	t_printer	*(*init)(int fd);
	t_printer	*(*autoflush)(t_bool);
	t_printer	*(*add)(const char *);
	t_printer	*(*addn)(const char *, size_t);
	t_printer	*(*adds)(t_string *);
	t_printer	*(*addss)(t_sstream *);
	t_printer	*(*addc)(char);
	t_printer	*(*flushn)(size_t);
	t_printer	*(*flush)(void);
};

t_printer		*ft_printer_init(int fd);
t_printer		*ft_printer_autoflush(t_bool active);
t_printer		*ft_printer(void);
t_printer		*ft_printer_addc(char c);
t_printer		*ft_printer_add(const char *str);
t_printer		*ft_printer_addn(const char *str, size_t size);
t_printer		*ft_printer_adds(t_string *s);
t_printer		*ft_printer_addss(t_sstream *s);
t_printer		*ft_printer_flushn(size_t n);
t_printer		*ft_printer_flush(void);

#endif
