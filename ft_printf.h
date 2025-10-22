#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

int	ft_int_len(int n);
size_t	ft_size_t_len(size_t n);

int ft_printf(const char *, ...);
int	dispatch_specifier(char c, va_list args);

#endif