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
		ss->clear = ft_sstream_clear;
		ss->add = ft_sstream_add;
		ss->addn = ft_sstream_addn;
		ss->addc = ft_sstream_addc;
		ss->adds = ft_sstream_adds;
		ss->addui = ft_sstream_addui;
		ss->addi = ft_sstream_addi;
		ss->addul = ft_sstream_addul;
		ss->addl = ft_sstream_addl;
	}
	return (ss);
}