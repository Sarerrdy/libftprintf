/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eina <eina@student.42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:54:12 by eina              #+#    #+#             */
/*   Updated: 2025/10/25 01:26:39 by eina             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printaddress(uintptr_t n, int fd, int basecase)
{
	char	*base;

	if (basecase == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		ft_printaddress(n / 16, fd, basecase);
	ft_putchar_fd(base[n % 16], fd);
	return (ft_hex_len(n));
}

int	ft_printpointer(void *ptr, int fd, int basecase)
{
	uintptr_t	n;

	if (!ptr)
		return (2 + ft_printstr("0x0", 1));
	else
	{
		n = (uintptr_t)ptr;
		ft_putstr_fd("0x", 1);
		return (2 + ft_printaddress(n, fd, basecase));
	}
}
