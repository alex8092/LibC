#include "ft_printer.h"

t_printer	*ft_printer_flush(void)
{
	return (ft_printer_flushn(ft_printer()->size));
}