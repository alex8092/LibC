#include "ft_printer.h"
#include "ft_common.h"

t_printer	*ft_printer_addn(const char *str, size_t size)
{
	t_printer *const	inst = ft_printer();
	char				*tmp;

	if (inst->size + size >= PRINTER_BUFFER_SIZE)
		ft_printer_flush();
	ft_memcpy((void *)inst->buffer + inst->size, (const void *)str, size);
	inst->size += size;
	if (inst->_autoflush)
	{
		while ((tmp = ft_strchr(inst->buffer, '\n')))
			ft_printer_flushn(tmp - inst->buffer + 1);
	}
	return (inst);
}