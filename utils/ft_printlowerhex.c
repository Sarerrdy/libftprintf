/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlowerhex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eina <eina@student.42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:50:44 by eina              #+#    #+#             */
/*   Updated: 2025/10/24 19:27:54 by eina             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printlowerhex(uintptr_t n, int fd)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_printlowerhex((n / 16), 1);
	ft_putchar_fd(base[n % 16], fd);
	return (ft_hex_len(n));
}
