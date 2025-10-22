#include "ft_printf.h"
#include "libft.h"

int	dispatch_specifier(char c, va_list args)
{
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (c == 'd')
	{
		ft_putnbr_fd(va_arg(args, int), 1);
		return (ft_int_len(va_arg(args, int)));
	}
	else if (c == 'i')
	{
        size_t i = va_arg(args, int);
        ft_putnbr_fd(va_arg(args, int), 1);
		return (ft_int_len(va_arg(args, int)));
	}
	else if (c == 's')
	{
		ft_putstr_fd(va_arg(args, int), 1);
		return (ft_strlen(va_arg(args, int)));
	}
	else
		return (0);
}
