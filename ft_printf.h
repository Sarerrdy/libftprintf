/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eina <eina@student.42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:46:27 by eina              #+#    #+#             */
/*   Updated: 2025/10/25 01:17:49 by eina             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <unistd.h>

int				ft_int_len(int n);
unsigned int	ft_unsigned_len(unsigned int n);
int				ft_hex_len(uintptr_t n);

int				ft_printchar(int c, int fd);
int				ft_printdecimals(int val, int fd);
int				ft_printunsignedint(unsigned int val, int fd);
int				ft_printstr(char *str, int fd);
int				ft_printpointer(void *ptr, int fd, int basecase);
int				ft_printupperhex(uintptr_t n, int fd);
int				ft_printlowerhex(uintptr_t n, int fd);

int				ft_printf(const char *format, ...);
int				ft_dispatch_specifier(char c, va_list args);

#endif