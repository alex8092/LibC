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
	ss->v_min_field_width = 10;
	ss->v_precision = 5;
	ss->v_left_align = true;
	// ss->v_space_or_sign = true;
	// ss->v_alternate_form = true;
	ss->addlx(ss, 0)->add(ss, " world");
	ft_printer()->addss(ss)->addc('\n');
	ft_printer_flush();
	ft_sstream_del(ss);
	printf("%-10.5lx world\n", (long int)0);
	return (0);
}
