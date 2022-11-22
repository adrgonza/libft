/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:28:16 by adrgonza          #+#    #+#             */
/*   Updated: 2022/09/07 08:11:43 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;
	char	*char_dest;
	char	*char_src;

	c = 0;
	char_dest = (char *) dest;
	char_src = (char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (c < n)
	{
		char_dest[c] = char_src[c];
		c++;
	}
	return (dest);
}
