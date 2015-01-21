#include "ft_string.h"
#include "ft_common.h"
#include <stdio.h>

t_string	*ft_string_app(t_string *s, const char *str)
{
	return (ft_string_appn(s, str, ft_strlen(str)));
}