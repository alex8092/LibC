#include "ft_string.h"
#include "ft_common.h"

t_string	*ft_string_replace(t_string *s, size_t index, size_t size,\
								const char *str)
{
	return (ft_string_replacen(s, index, size, str, ft_strlen(str)));
}