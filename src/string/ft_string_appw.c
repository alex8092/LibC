#include "ft_string.h"
#include "ft_common.h"

t_string	*ft_string_appw(t_string *s, const wchar_t *str)
{
	return (ft_string_appwn(s, str, ft_wstrlen(str)));
}