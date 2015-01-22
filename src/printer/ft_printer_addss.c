#include "ft_printer.h"

t_printer	*ft_printer_addss(t_sstream *ss)
{
	return (ft_printer_addn(ss->str->str, ss->str->size));
}