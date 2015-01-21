#include "ft_string.h"
#include "ft_common.h"

t_string	*ft_string_replacen(t_string *s, size_t index, size_t size,\
								const char *str, size_t size_str)
{
	if (s->size - size + size_str > s->reserve)
		ft_string_reserve(s, s->size - size + size_str);
	// to finish
	(void)str;
	(void)index;
	return (s);
}