#include <stdio.h>
#include <stdlib.h>
#include "ft_common.h"
#include "ft_string.h"
#include "ft_printer.h"

int	main(void)
{
	t_string	*s = ft_string_news("bonjour");

	int i = 0;
	for (;i < 4; ++i)
		ft_string_insert(s, "Heh", i);
	ft_printer()->autoflush(true);
	ft_printer_init(1)->adds(s)->addc('\n');
	ft_string_delptr(&s);
	return (0);
}