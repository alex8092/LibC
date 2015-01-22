#include "ft_sstream_private.h"

t_sstream	*ft_sstream_addl(t_sstream *ss, long int i)
{
	ft_sstream_check_reserve(ss, 22);
	if (i < 0)
	{
		ft_string_appn(ss->str, "-", 1);
		return (ft_sstream_addul(ss, -i));
	}
	return (ft_sstream_addul(ss, i));
}