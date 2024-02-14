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
	int	i;

	i = 0;
	if (len <= 0)
		i = 1;
	while (len && ++i)
		len = len / 10;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	number;
	size_t		len;

	number = n;
	len = sizeof_int(n);
	str = (char *)ft_calloc(len, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		number *= -1;
		str[0] = '-';
	}
	if (!number)
		str[0] = '0';
	while (number > 0)
	{
		str[--len] = number % 10 + '0';
		number /= 10;
	}
	return (str);
}
