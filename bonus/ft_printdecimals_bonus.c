/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimals_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eina <eina@student.42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:06:17 by eina              #+#    #+#             */
/*   Updated: 2025/11/08 00:48:24 by eina             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_putnbr_abs_fd(long n, int fd)
{
	int	count;

	if (n >= 10)
		count = ft_putnbr_abs_fd(n / 10, fd);
	else
		count = 0;
	ft_putchar_fd((n % 10) + '0', fd);
	return (count + 1);
}

static void	print_sign(int negative, int fd, int *total)
{
	if (negative)
	{
		ft_putchar_fd('-', fd);
		(*total)++;
	}
}

static int	handle_zero_flag(int sint, int pad, int fd, int negative)
{
	long	n;
	int		total;

	total = 0;
	print_sign(negative, fd, &total);
	total += ft_print_pad('0', pad, fd);
	n = sint;
	if (negative)
		n = -n;
	total += ft_putnbr_abs_fd(n, fd);
	return (total);
}

static int	ft_dprintparser(int sint, int vals[2], t_fmt *fmt, int fd)
{
	int		total;
	int		negative;
	long	n;

	total = 0;
	negative = (sint < 0);
	n = sint;
	if (negative)
		n = -n;
	if (fmt->zero && fmt->precision < 0 && !fmt->left)
		return (handle_zero_flag(sint, vals[1], fd, negative));
	if (!fmt->left)
		total += ft_print_pad(' ', vals[1], fd);
	print_sign(negative, fd, &total);
	if (fmt->precision >= 0)
		total += ft_print_pad('0', fmt->precision - vals[0], fd);
	if (!(sint == 0 && fmt->precision == 0))
		total += ft_putnbr_abs_fd(n, fd);
	if (fmt->left)
		total += ft_print_pad(' ', vals[1], fd);
	return (total);
}

int	ft_printdecimals(va_list *args, int fd, t_fmt *fmt)
{
	int	sint;
	int	numlen;
	int	len;
	int	vals[2];

	sint = va_arg(*args, int);
	if (sint == 0 && fmt->precision == 0)
		numlen = 0;
	else if (sint < 0)
		numlen = ft_int_len(-sint);
	else
		numlen = ft_int_len(sint);
	if (fmt->precision > numlen)
		len = fmt->precision;
	else
		len = numlen;
	if (sint < 0)
		len++;
	vals[0] = numlen;
	if (fmt->width > len)
		vals[1] = fmt->width - len;
	else
		vals[1] = 0;
	return (ft_dprintparser(sint, vals, fmt, fd));
}
