#include "ft_string.h"

t_string	*ft_string_appc(t_string *s, const char c)
{
	if (s->size + 1 > s->reserve)
		ft_string_reserve(s, s->size + 1);
	s->str[s->size] = c;
	++s->size;
	s->str[s->size] = 0;
	return (s);
}