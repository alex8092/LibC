#include "ft_vector.h"
#include <stdlib.h>

void	ft_vector_del(t_vector *v)
{
	if (v->ptr)
		free(v->ptr);
	free(v);
}