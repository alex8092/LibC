#include "ft_printer.h"

t_printer	*ft_printer_init(int fd)
{
	t_printer * const	inst = ft_printer();

	if (inst->fd != fd)
	{
		if (inst->size)
			ft_printer_flush();
		inst->fd = fd;
	}
	return (inst);
}