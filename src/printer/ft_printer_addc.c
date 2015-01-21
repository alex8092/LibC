#include "ft_printer.h"

t_printer	*ft_printer_addc(char c)
{
	return (ft_printer_addn(&c, 1));
}