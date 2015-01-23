#include "ft_sstream_private.h"

size_t			ft_sstream_count_digits(unsigned long int i)
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