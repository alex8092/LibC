#include "ft_sstream_private.h"

size_t		ft_sstream_count_hexa(t_sstream *ss, long int i, size_t n)
{
	size_t	count;
	int		j;
	char	val;
	t_bool	first;

	first = true;
	count = (i && ss->v_alternate_form) ? 2 : 0;
	j = n;
	while (j >= 0)
	{
		val = ((i >> j) & 0xF);
		if (!first || (first && (val || j == 0)))
		{
			++count;
			first = false;
		}
		j -= 4;
	}
	return (count);
}