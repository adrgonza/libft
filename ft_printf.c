/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:36:06 by adrgonza          #+#    #+#             */
/*   Updated: 2023/11/28 22:14:24 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsigned(unsigned int const nb)
{
	int	r_value;
	int	count;

	count = 0;
	r_value = 0;
	if (nb > 9)
	{
		r_value = ft_putunsigned(nb / 10);
		if (r_value == -1)
			return (-1);
		count += r_value;
	}
	if (ft_putchr(nb % 10 + '0') == -1)
		return (-1);
	count++;
	return (count);
}

int	ft_putstr(char const *str)
{
	int	i;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
		i++;
	return (write(1, str, i));
}

int	ft_puthex(unsigned long const nb, char ch)
{
	int		r_value;
	int		count;
	char	*s;

	count = 0;
	s = "0123456789abcdef";
	if (ch == 'X')
		s = "0123456789ABCDEF";
	if (ch == 'p')
	{
		count = ft_putstr("0x");
		if (count == -1)
			return (-1);
		ch = 0;
	}
	if (nb < 16)
		return (count += ft_putchr(s[nb]));
	r_value = ft_puthex(nb / 16, ch);
	if (r_value == -1)
		return (-1);
	r_value += ft_puthex(nb % 16, ch);
	if (r_value == -1)
		return (-1);
	return (count + r_value);
}

static int	ft_check_conversions(char const s, va_list args)
{
	if (s == 'c')
		return (ft_putchr(va_arg(args, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (s == 'd' || s == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (s == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (s == 'x' || s == 'X')
		return (ft_puthex(va_arg(args, unsigned int), s));
	else if (s == 'p')
		return (ft_puthex(va_arg(args, unsigned long int), s));
	else if (s == '%')
		return (write(1, "%", 1));
	return (-1);
}

int	ft_printf(char const *fmt, ...)
{
	va_list	args;
	int		r_value;
	int		count;

	va_start(args, fmt);
	count = 0;
	while (*fmt)
	{
		if (*fmt == '%')
			r_value = ft_check_conversions(*(++fmt), args);
		else
			r_value = write(1, &*fmt, 1);
		if (r_value == -1)
			return (va_end(args), -1);
		count += r_value;
		fmt++;
	}
	return (va_end(args), count);
}
