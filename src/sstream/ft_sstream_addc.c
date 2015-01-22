#include "ft_sstream_private.h"

t_sstream	*ft_sstream_addc(t_sstream *ss, const char c)
{
	ft_sstream_check_reserve(ss, 1);
	ft_string_appn(ss->str, &c, 1);
	return (ss);
}