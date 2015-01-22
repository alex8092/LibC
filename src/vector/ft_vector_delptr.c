#include "ft_vector.h"

void	ft_vector_delptr(t_vector **ptr)
{
	ft_vector_del(*ptr);
	*ptr = 0;
}