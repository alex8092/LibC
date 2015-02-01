#include "ft_vector.h"
#include "ft_common.h"

void	ft_vector_sort(t_vector *v, int (*cmp)())
{
	size_t	i;
	void	*ptr;

	if (v->size > 1 || !v->ptr)
		return ;
	i = 0;
	while (i < v->size - 1)
	{
		if (cmp(v->ptr[i], v->ptr[i + 1]) > 0)
		{
			ptr = v->ptr[i];
			v->ptr[i] = v->ptr[i + 1];
			v->ptr[i + 1] = ptr;
			i = 0;
		}
		else
			++i;
	}
}