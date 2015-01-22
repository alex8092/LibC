#include "ft_sstream.h"

t_sstream	*ft_sstream_adds(t_sstream *ss, t_string *str)
{
	return (ft_sstream_addn(ss, str->str, str->size));
}