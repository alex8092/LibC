#include "ft_flagger_private.h"

t_bool	ft_flagger_stop(t_flagger *f, const char *av)
{
	if (av[0] == '-' && !av[1])
		return (true);
	else if (av[0] == '-' && av[1] == '-' && !av[2])
	{
		++f->cur_index;
		return (true);
	}
	else if (av[0] == '-')
		return (false);
	return (true);
}