#include <stdio.h>
#include <stdlib.h>
#include "ft_common.h"
#include "ft_string.h"
#include "ft_printer.h"
#include "ft_vector.h"
#include "ft_sstream.h"

int	main(void)
{
	t_sstream	*ss = ft_sstream_new();
	ss->addi(ss, 10)->addc(ss, ' ')->add(ss, "Bonjour");
	t_string	*str = ft_string_cpy(ss->str);
	ft_string_del(str);
	ss->addw(ss, L" muhahaha");
	write(1, ss->str->str, ss->str->size);
	ft_printer_init(1)->add("str: ")->adds(ss->str)->addc('\n');
	ft_printer_init(1)->add("clear: ")->adds(ft_sstream_clear(ss)->str)->addc('\n');
	ft_printer_flush();
	ft_sstream_del(ss);
	return (0);
}