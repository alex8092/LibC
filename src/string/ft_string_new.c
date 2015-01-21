#include "ft_string.h"
#include "ft_common.h"

t_string	*ft_string_new(void)
{
	t_string	*s;

	s = (t_string *)ft_memalloc(sizeof(t_string));
	if (s)
		ft_string_reserve(s, 0);
	return (s);
}