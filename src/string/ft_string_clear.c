#include "ft_string.h"
#include <stdlib.h>

t_string	*ft_string_clear(t_string *s)
{
	if (s->str)
		free(s->str);
	s->str = 0;
	s->size = 0;
	s->reserve = 0;
	return (ft_string_reserve(s, 0));
}