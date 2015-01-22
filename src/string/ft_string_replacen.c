#include "ft_string.h"
#include "ft_common.h"

t_string	*ft_string_replacen(t_string *s, size_t index, size_t size,\
								const char *str, size_t size_str)
{
	char	tmp[s->size - index - size];
	if (s->size - size + size_str > s->reserve)
		ft_string_reserve(s, s->size - size + size_str);
	ft_strncpy(tmp, s->str + index + size, s->size - index - size);
	ft_strncpy(s->str + index, str, size_str);
	ft_strncpy(s->str + index + size_str, tmp, s->size - index - size);
	s->str[s->size - size + size_str] = 0;
	s->size -= size;
	s->size += size_str;
	return (s);
}