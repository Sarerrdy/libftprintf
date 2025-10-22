#include "ft_printf.h"
#include "libft.h"

int ft_printf(const char *format, ...)
{
    int count;
    va_list args;

    if (!format)
        return (0);
    va_start(args, format);
    count = 0;
    while (format)
    {
        if (*format == '%')
        {
            format++;
            count += dispatch_specifier(*format, args);
        }
        else
        {
            ft_putchar_fd(*format, 1);
            count++;
        }
        format++;
    }
    
    va_end(args);
    return(count);
}