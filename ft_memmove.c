/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:28:16 by adrgonza          #+#    #+#             */
/*   Updated: 2022/09/14 20:23:09 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*char_dest;
	char	*char_src;

	char_dest = (char *) dest;
	char_src = (char *) src;
	i = -1;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (char_src < char_dest)
		while ((int)(--n) >= 0)
			char_dest[n] = char_src[n];
	else
		while (++i < n)
			char_dest[i] = char_src[i];
	return (dest);
}
