#include "ft_string.h"

t_string	*ft_string_appwn(t_string *s, const wchar_t *str, size_t size)
{
	if (s->size + size * sizeof(wchar_t) > s->reserve)
		ft_string_reserve(s, s->size + size * sizeof(wchar_t));
	ft_string_appn(s, (const char *)str, size * sizeof(wchar_t));
	return (s);
}