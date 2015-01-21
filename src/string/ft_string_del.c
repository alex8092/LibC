#include "ft_string.h"
#include <stdlib.h>

void	ft_string_del(t_string *s)
{
	if (s->str)
		free(s->str);
	free(s);
}