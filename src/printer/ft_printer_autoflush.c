#include "ft_printer.h"

t_printer	*ft_printer_autoflush(t_bool active)
{
	t_printer * const	inst = ft_printer();

	inst->_autoflush = active;
	return (inst);
}