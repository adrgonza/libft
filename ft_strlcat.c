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
	size_t	i;
	size_t	j;

	if (nb == 0)
		return (ft_strlen(src));
	i = 0;
	while (dest[i] && i < nb)
		i++;
	j = -1;
	while ((src[++j]) && ((i + j + 1) < nb))
		dest[i + j] = src[j];
	if (i != nb)
		dest[i + j] = 0;
	return (i + ft_strlen(src));
}
