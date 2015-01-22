#include "ft_sstream_private.h"

static size_t	f_count_digits(unsigned int i)
{
	size_t	n;

	if (!i)
		return (1);
	n = 0;
	while (i)
	{
		i /= 10;
		++n;
	}
	return (n);
}

t_sstream		*ft_sstream_addui(t_sstream *ss, unsigned int i)
{
	const size_t	n = f_count_digits(i);
	char			nstr[n];
	size_t			index;

	ft_sstream_check_reserve(ss, 22);
	index = 0;
	while (index < n)
	{
		nstr[n - index - 1] = (i % 10) + '0';
		i /= 10;
		++index;
	}
	ft_string_appn(ss->str, nstr, n);
	return (ss);
}