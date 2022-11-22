/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:10:03 by adrgonza          #+#    #+#             */
/*   Updated: 2022/09/06 13:12:13 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	size_t	a;
	size_t	b;

	if (nb == 0)
		return (ft_strlen(src));
	a = 0;
	while (dest[a] && a < nb)
		a++;
	b = 0;
	while ((src[b]) && ((a + b + 1) < nb))
	{
		dest[a + b] = src[b];
		b++;
	}
	if (a != nb)
		dest[a + b] = '\0';
	return (a + ft_strlen(src));
}
