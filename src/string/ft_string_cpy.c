#include "ft_string.h"

t_string	*ft_string_cpy(const t_string *s)
{
	t_string	*news;

	news = ft_string_newr(s->size);
	if (news)
		ft_string_appn(news, s->str, s->size);
	return (news);
}