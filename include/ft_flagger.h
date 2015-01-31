#ifndef FT_FLAGGER_H
# define FT_FLAGGER_H

# include "ft_vector.h"
# include "ft_common.h"
# include <unistd.h>

typedef struct s_flagger	t_flagger;
typedef struct s_flagopt	t_flagopt;

struct			s_flagopt
{
	char		short_name;
	const char	*name;
	size_t		name_len;
	t_bool		has_arg;
	t_bool		active;
	const char	*arg;
};

struct			s_flagger
{
	t_vector	*flags;
	t_flagger	*(*add)(t_flagger*, char, const char *, t_bool);
	t_bool		(*parse)(t_flagger *, int, char **);
	int			cur_index;
};

t_flagger		*ft_flagger_new(void);
t_flagger		*ft_flagger_add(t_flagger *f, char s, const char *n, t_bool a);
t_bool			ft_flagger_parse(t_flagger *f, int ac, char **av);
void			ft_flagger_del(t_flagger *f);

#endif