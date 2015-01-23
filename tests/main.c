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
	ss->v_alternate_form = true;
	ss->addo(ss, 100);
	ft_printer()->addss(ss)->addc('\n');
	ft_printer_flush();
	ft_sstream_del(ss);
	printf("%#o\n", 100);
	return (0);
}