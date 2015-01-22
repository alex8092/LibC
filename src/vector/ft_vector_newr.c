#include "ft_vector.h"
#include "ft_common.h"

t_vector	*ft_vector_newr(size_t reserve)
{
	t_vector	*v;

	v = ft_vector_new();
	if (v)
	{
		size_t real_reserve = 1;
		while (real_reserve < reserve)
			real_reserve *= 2;
		v->ptr = (void **)ft_memalloc(sizeof(void *) * (real_reserve));
		v->reserve = real_reserve;
	}
	return (v);
}