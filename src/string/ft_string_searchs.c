#include "ft_string.h"

ssize_t	ft_string_searchs(t_string *s, t_string *search)
{
	return (ft_string_search(s, search->str));
}