#include "ft_printer.h"
#include "ft_common.h"

t_printer	*ft_printer_add(const char *str)
{
	return (ft_printer_addn(str, ft_strlen(str)));
}