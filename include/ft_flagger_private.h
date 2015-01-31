#ifndef FT_FLAGGER_PRIVATE_H
# define FT_FLAGGER_PRIVATE_H

# include "ft_flagger.h"

t_bool	ft_flagger_stop(t_flagger *f, const char *av);
t_bool	ft_flagger_parse_arg(t_flagger *f, const char **av);

#endif