/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:22:26 by adrgonza          #+#    #+#             */
/*   Updated: 2022/10/06 10:21:18 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	sizeof_int(int len)
{
	int	a;

	a = 0;
	if (len <= 0)
		a = 1;
	while (len && ++a)
		len = len / 10;
	return (a);
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	b;
	size_t		a;

	b = n;
	a = sizeof_int(n);
	str = (char *)malloc(a + 1);
	if (!str)
		return (NULL);
	str[a] = '\0';
	if (n < 0)
	{
		b = b * -1;
		str[0] = '-';
	}
	if (b == 0)
		str[0] = '0';
	while (b > 0)
	{
		str[--a] = b % 10 + '0';
		b = b / 10;
	}
	return (str);
}
