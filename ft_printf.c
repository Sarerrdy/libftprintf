#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    int i;
    int count;
    va_list args;

    if (!format)
        return NULL;
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