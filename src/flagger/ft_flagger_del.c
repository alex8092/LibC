#include "ft_flagger.h"
#include <stdlib.h>

static void		f_del_flag(void *flag)
{
	t_flagopt	*opt;

	opt = (t_flagopt*)flag;
	free(opt);
}

void			ft_flagger_del(t_flagger *f)
{
	if (f)
	{
		ft_vector_clearfree(f->flags, &f_del_flag);
		ft_vector_del(f->flags);
		free(f);
	}
}