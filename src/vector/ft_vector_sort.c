#include "ft_vector.h"
#include "ft_common.h"

void	ft_vector_sort(t_vector *v, int (*cmp)())
{
	ft_sort((char **)v->ptr, cmp);
}