#include "ft_vector.h"
#include "ft_common.h"

t_vector	*ft_vector_new(void)
{
	t_vector 	*v;

	v = (t_vector *)ft_memalloc(sizeof(t_vector));
	return (v);
}