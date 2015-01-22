#include "ft_sstream.h"
#include "ft_common.h"
#include <stdlib.h>

t_sstream	*ft_sstream_new(void)
{
	t_sstream	*ss;

	ss = (t_sstream *)ft_memalloc(sizeof(t_sstream));
	if (ss)
	{
		ss->str = ft_string_newr(0);
		if (!ss->str)
		{
			free(ss);
			return (0);
		}
	}
	return (ss);
}