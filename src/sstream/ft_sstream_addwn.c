#include "ft_sstream_private.h"

t_sstream	*ft_sstream_addwn(t_sstream *ss, const wchar_t *str,\
								size_t size)
{
	size_t	i;
	
	if (size < ss->v_min_field_width)
	{
		ft_sstream_check_reserve(ss, ss->v_min_field_width * sizeof(wchar_t));
		i = size;
		while (i < ss->v_min_field_width)
		{
			ft_string_appc(ss->str, ss->v_char_fill);
			++i;
		}
	}
	else
		ft_sstream_check_reserve(ss, size * sizeof(wchar_t));
	ft_string_appwn(ss->str, str, size);
	return (ft_sstream_reset_modifiers(ss));
}