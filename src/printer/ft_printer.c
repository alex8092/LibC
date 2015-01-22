#include "ft_printer.h"
#include "ft_common.h"

t_printer	*ft_printer(void)
{
	static t_printer	_inst;
	static t_bool		init = false;

	if (!init)
	{
		ft_bzero((void *)&_inst, sizeof(t_printer));
		_inst.init = ft_printer_init;
		_inst.autoflush = ft_printer_autoflush;
		_inst.add = ft_printer_add;
		_inst.addn = ft_printer_addn;
		_inst.adds = ft_printer_adds;
		_inst.addss = ft_printer_addss;
		_inst.addc = ft_printer_addc;
		_inst.flushn = ft_printer_flushn;
		_inst.flush = ft_printer_flush;
		init = true;
	}
	return (&_inst);
}