#include "ft_string.h"

t_string	*ft_string_replaces(t_string *s, size_t index, size_t size,\
								t_string *str)
{
	return (ft_string_replacen(s, index, size, str->str, str->size));
}