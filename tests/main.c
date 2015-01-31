#include <stdio.h>
#include <stdlib.h>
#include "ft_common.h"
#include "ft_string.h"
#include "ft_printer.h"
#include "ft_vector.h"
#include "ft_sstream.h"
#include "ft_flagger.h"

int	main(int ac, char **av)
{
	t_flagger	*f = ft_flagger_new();
	f->add(f, 'l', "list", false);
	if (f->parse(f, ac, av))
	{
		printf("next: %s\n", av[f->cur_index]);
	}
	ft_flagger_del(f);
	(void)ac;
	(void)av;
	return (0);
}
