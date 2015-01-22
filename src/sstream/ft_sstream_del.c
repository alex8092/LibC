#include "ft_sstream.h"
#include <stdlib.h>

void	ft_sstream_del(t_sstream *ss)
{
	if (ss->str)
		ft_string_del(ss->str);
	free(ss);
}