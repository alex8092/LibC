#include "ft_printer.h"

t_printer	*ft_printer_adds(t_string *s)
{
	return (ft_printer_addn(s->str, s->size));
}