#include "ft_sstream.h"
#include "ft_common.h"

t_sstream	*ft_sstream_add(t_sstream *ss, const char *str)
{
	return (ft_sstream_addn(ss, str, ft_strlen(str)));
}