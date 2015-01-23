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
	ss->v_min_field_width = 5;
	ss->addx(ss, 1000);
	ft_printer()->addss(ss)->addc('\n');
	ft_printer_flush();
	ft_sstream_del(ss);
	printf("%#X\n", 0);
	return (0);
}