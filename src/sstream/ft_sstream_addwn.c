#include "ft_sstream_private.h"

static void	f_get_alignement(t_sstream *ss, size_t n, t_bool end)
{
	size_t	index;
	size_t	tmp;

	if (n < ss->v_min_field_width)
	{
		tmp = ss->v_min_field_width;
		if (!end)
			ft_sstream_check_reserve(ss, tmp * sizeof(wchar_t));
		if ((!end && ss->v_left_align) || (end && !ss->v_left_align))
			return ;
		index = n;
		while (index < ss->v_min_field_width)
		{
			ft_string_appc(ss->str, ss->v_char_fill);
			++index;
		}
	}
	else if (!end)
		ft_sstream_check_reserve(ss, n * sizeof(wchar_t));
}

t_sstream	*ft_sstream_addwn(t_sstream *ss, const wchar_t *str,\
								size_t size)
{
	if (ss->v_precision != 0 && size > ss->v_precision)
		size = ss->v_precision;
	f_get_alignement(ss, size, false);
	ft_string_appwn(ss->str, str, size);
	f_get_alignement(ss, size, true);
	return (ft_sstream_reset_modifiers(ss));
}