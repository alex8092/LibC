#include "ft_sstream_private.h"

t_sstream	*ft_sstream_reserve(t_sstream *ss, size_t size)
{
	if (ss->str->size < size)
		ft_sstream_check_reserve(ss, ss->str->size - size);
	return (ss);
}