#include "ft_printer.h"

t_printer	*ft_printer_flushn(size_t size)
{
	t_printer * const	inst = ft_printer();
	ssize_t				ret;

	ret = write(inst->fd, inst->buffer, size);
	(void)ret;
	inst->size -= size;
	ft_strncpy(inst->buffer, inst->buffer + size, inst->size + 1);
	return (inst);
}