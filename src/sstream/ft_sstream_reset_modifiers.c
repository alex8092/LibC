#include "ft_sstream_private.h"

t_sstream	*ft_sstream_reset_modifiers(t_sstream *ss)
{
	ss->v_upper = false;
	ss->v_alternate_form = false;
	ss->v_char_fill = ' ';
	ss->v_always_sign = false;
	ss->v_min_field_width = 0;
	ss->v_precision = 0;
	ss->v_left_align = false;
	ss->v_space_or_sign = false;
	return (ss);
}
