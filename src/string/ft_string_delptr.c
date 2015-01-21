#include "ft_string.h"
#include <stdlib.h>

void	ft_string_delptr(t_string **ptr)
{
	if ((*ptr)->str)
		free((*ptr)->str);
	free(*ptr);
	*ptr = 0;
}