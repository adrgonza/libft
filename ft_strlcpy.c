/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 07:45:19 by adrgonza          #+#    #+#             */
/*   Updated: 2022/11/18 17:20:44 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	c;

	c = 0;
	if (size > 0)
	{
		while (src[c] && c < (size - 1))
		{
			dst[c] = src[c];
			c++;
		}
		dst[c] = '\0';
	}
	while (src[c])
		c++;
	return (c);
}
