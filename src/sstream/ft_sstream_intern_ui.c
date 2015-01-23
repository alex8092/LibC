#include "ft_sstream_private.h"

void	ft_sstream_intern_ui(t_sstream *ss, unsigned long int i, size_t n)
{
	size_t			index;
	char			nstr[n];

	index = 0;
	while (index < n)
	{
		nstr[n - index - 1] = (i % 10) + '0';
		i /= 10;
		++index;
	}
	ft_string_appn(ss->str, nstr, n);
}