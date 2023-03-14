/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <adrgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:36:06 by adrgonza          #+#    #+#             */
/*   Updated: 2023/03/14 16:01:25 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsigned(unsigned int a)
{
	int	b;

	b = 0;
	if (a > 9)
		b += ft_putunsigned(a / 10);
	return (b += ft_putchr(a % 10 + '0'));
}

int	ft_putstr(const char *s)
{
	int	c;

	if (!s)
		return (write(1, "(null)", 6));
	c = 0;
	while (s[c])
		c++;
	return (write(1, s, c));
}

int	ft_puthex(unsigned long n, char c)
{
	int		a;
	char	*s;

	a = 0;
	if (c == 'X')
		s = "0123456789ABCDEF";
	else
		s = "0123456789abcdef";
	if (c == 'p')
	{
		a += ft_putstr("0x");
		c = 0;
	}
	if (n < 16)
		a += ft_putchr(s[n]);
	else
	{
		a += ft_puthex(n / 16, c);
		a += ft_puthex(n % 16, c);
	}
	return (a);
}

int	ft_check_conversions(char s, va_list args)
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
	return (0);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		a;

	va_start(args, s);
	a = 0;
	while (*s)
	{
		if (*s == '%')
			a += ft_check_conversions(*(++s), args);
		else
			a += write(1, &*s, 1);
		s++;
	}
	va_end(args);
	return (a);
}
