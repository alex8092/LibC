#include <stdio.h>
#include <stdlib.h>
#include "ft_common.h"
#include "ft_string.h"

int	main(void)
{
	t_string	*s = ft_string_news("bonjour");

	int i = 0;
	for (;i < 4; ++i)
		ft_string_insert(s, "Heh", i);
	printf("%s\n", s->str);
	ft_string_clear(s);
	printf("clear: %s\n", s->str);
	ft_string_delptr(&s);
	return (0);
}