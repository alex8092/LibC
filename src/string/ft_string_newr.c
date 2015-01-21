#include "ft_string.h"
#include "ft_common.h"
#include <stdlib.h>

t_string	*ft_string_newr(size_t reserve)
{
	t_string	*s;

	s = ft_string_new();
	if (s)
		ft_string_reserve(s, reserve);
	return (s);
}