#include "ft_sstream_private.h"
#include "ft_common.h"

t_sstream	*ft_sstream_addx(t_sstream *ss, int i)
{
	t_bool	first;
	char	value;

	first = true;
	ft_sstream_check_reserve(ss, sizeof(int) * 2);
	while (i && ((value = ((i >> (sizeof(int) * 8 - 4)) & 0xF)) || !value))
	{
		if (!first || (first && value))
		{
			if (!first || value)
			{
				ft_sstream_addc(ss, value + '0');
				first = false;
			}
		}
		i <<= 4;
		value = ((i >> (sizeof(int) * 8 - 4)) & 0xF);
		if (!first || (first && value & 0xF))
		{
			ft_sstream_addc(ss, value + '0');
			first = false;
		}
		i <<= 4;
	}
	return (ss);
}