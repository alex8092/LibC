#include "ft_flagger.h"
#include "ft_common.h"

t_flagger	*ft_flagger_new(void)
{
	t_flagger	*f;

	f = (t_flagger *)ft_memalloc(sizeof(t_flagger));
	if (f)
	{
		f->flags = ft_vector_new();
		f->add = &ft_flagger_add;
		f->parse = &ft_flagger_parse;
	}
	return (f);
}