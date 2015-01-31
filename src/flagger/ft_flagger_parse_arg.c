#include "ft_flagger_private.h"
#include "ft_printer.h"

static t_flagopt	*f_get_opt(t_flagger *f, char c, const char *name)
{
	size_t		i;
	t_flagopt	*opt;

	i = 0;
	while (i < f->flags->size)
	{
		opt = (t_flagopt *)f->flags->ptr[i];
		if (name && opt->name && !ft_strcmp(name, opt->name))
			return (opt);
		if (c && opt->short_name == c)
			return (opt);
		++i;
	}
	return (0);
}

static t_bool		f_parse_short(t_flagger *f, const char **av)
{
	size_t		i;
	t_flagopt	*opt;

	i = 1;
	while (av[f->cur_index][i])
	{
		opt = f_get_opt(f, av[f->cur_index][i], 0);
		if (!opt)
		{
			ft_printer_init(2)->add(av[0])->add(": illegal option -- ");
			ft_printer()->addc(av[f->cur_index][i])->addc('\n')->flush();
			return (false);
		}
		else
			opt->active = true;
		++i;
	}
	return (true);
}

static t_bool		f_parse_long(t_flagger *f, const char **av)
{
	t_flagopt	*opt;

	opt = f_get_opt(f, 0, av[f->cur_index] + 2);
	if (opt)
	{
		opt->active = true;
		return (true);
	}
	return (false);
}

t_bool				ft_flagger_parse_arg(t_flagger *f, const char **av)
{
	const t_bool	is_short = (av[f->cur_index][1] == '-') ? false : true;

	if (is_short)
		return (f_parse_short(f, av));
	else
	{
		ft_printer_init(2)->add(av[0])->add(": illegal option -- ");
		ft_printer()->add(av[f->cur_index] + 2)->addc('\n')->flush();
		return (f_parse_long(f, av));
	}
}