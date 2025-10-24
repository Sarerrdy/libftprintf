/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsignedint.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eina <eina@student.42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:01:35 by eina              #+#    #+#             */
/*   Updated: 2025/10/24 17:56:18 by eina             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsignedint(unsigned int val, int fd)
{
	if (val >= 10)
		ft_putnbr_fd(val / 10, fd);
	ft_putchar_fd((val % 10) + '0', fd);
	return (ft_unsigned_len(val));
}
