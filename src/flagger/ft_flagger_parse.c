#include "ft_flagger_private.h"

t_bool			ft_flagger_parse(t_flagger *f, int ac, char **av)
{
	f->cur_index = 1;
	while (f->cur_index < ac)
	{
		if (ft_flagger_stop(f, (const char *)av[f->cur_index]))
			break ;
		if (!ft_flagger_parse_arg(f, (const char **)av))
			return (false);
		++f->cur_index;
	}
	return (true);
}