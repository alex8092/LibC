#include "ft_flagger_private.h"

static t_bool		f_parse_short(t_flagger *f, const char **av)
{
	return (0);	
}

static t_bool		f_parse_long(t_flagger *f, const char **av)
{
	size_t		i;
	t_flagopt	*opt;

	i = 0;
	while (i < f->flags->size)
	{
		opt = (t_flagopt *)f->flags->ptr[i];
		if (!ft_strcmp(opt->name, av[f->cur_index] + 2))
		{
			opt->active = true;
			return (true);
		}
		++i;
	}
	return (false);
}

t_bool				ft_flagger_parse_arg(t_flagger *f, const char **av)
{
	const t_bool	is_short = (av[f->cur_index][1] == '-') ? false : true;
	t_flagopt		*opt;

	if (is_short)
		return (f_parse_short(f, av));
	else
		return (f_parse_long(f, av));
}