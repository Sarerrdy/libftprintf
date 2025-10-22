#include "ft_printf.h"
#include "libft.h"

int dispatch_specifier(char c, va_list args)
{
    if (c == 'c')
    {
        char val = va_arg(args, int);
        ft_putchar_fd(va_arg(args,  int), 1);
        return (1);
    }
    else if (c == 'd')
    {
        ft_putnbr_fd(c, 1);
    }
    else if (c == 'i')
    {

    }
    else if (c == 's')
    {

    }
    else
        return (0);
    
}