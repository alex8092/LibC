#include "ft_sstream.h"

t_sstream	*ft_sstream_clear(t_sstream *ss)
{
	if (ss->str)
		ft_string_reserve(ss->str, 0);
	return (ss);
}