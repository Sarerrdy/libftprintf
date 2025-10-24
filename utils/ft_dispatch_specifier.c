/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatch_specifier.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eina <eina@student.42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:53:49 by eina              #+#    #+#             */
/*   Updated: 2025/10/25 00:34:29 by eina             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dispatch_specifier(char c, va_list args)
{
	if (c == 'c')
		return (ft_printchar(va_arg(args, int), 1));
	else if (c == 'd' || c == 'i')
		return (ft_printdecimals(va_arg(args, int), 1));
	else if (c == 'u')
		return (ft_printunsignedint(va_arg(args, unsigned int), 1));
	else if (c == 's')
		return (ft_printstr(va_arg(args, char *), 1));
	else if (c == 'p')
	{
		return (ft_printpointer(va_arg(args, void *), 1, 0));
	}
	else if (c == 'x')
		return (ft_printlowerhex((uintptr_t)va_arg(args, void *), 1));
	else if (c == 'X')
		return (ft_printupperhex((uintptr_t)va_arg(args, void *), 1));
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else
		return (0);
}
