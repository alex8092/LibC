#include "ft_sstream_private.h"

t_sstream	*ft_sstream_reset_modifiers(t_sstream *ss)
{
	ss->v_upper = false;
	ss->v_alternate_form = false;
	ss->v_char_fill = ' ';
	return (ss);
}