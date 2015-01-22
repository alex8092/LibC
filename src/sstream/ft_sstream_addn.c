#include "ft_sstream_private.h"

t_sstream	*ft_sstream_addn(t_sstream *ss, const char *str, size_t n)
{
	ft_sstream_check_reserve(ss, n);
	ft_string_appn(ss->str, str, n);
	return (ss);
}