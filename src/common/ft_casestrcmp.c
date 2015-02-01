#include "ft_common.h"

int		ft_casestrcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && ft_tolower(s1[i]) == ft_tolower(s2[i]))
		++i;
	return (ft_tolower(s2[i]) - ft_tolower(s1[i]));
}