#include "ft_string.h"
#include "ft_common.h"

t_string	*ft_string_substr(const t_string *s, size_t index, size_t size)
{
	t_string	*news;

	news = ft_string_newr(size);
	if (news)
	{
		ft_string_appn(news, s->str + index, size);
	}
	return (news);
}