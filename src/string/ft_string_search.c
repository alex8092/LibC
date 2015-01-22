#include "ft_string.h"
#include "ft_common.h"

ssize_t	ft_string_search(t_string *s, const char *str)
{
	char	*ptr;

	if ((ptr = ft_strstr(s->str, str)))
		return (ptr - s->str);
	return (-1);
}