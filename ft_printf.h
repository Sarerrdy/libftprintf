#ifndef FT_PRINTF_h
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *, ...);
int dispatch_specifier(char c, va_list args);

#endif