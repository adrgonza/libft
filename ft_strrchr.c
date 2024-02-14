/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:11:52 by adrgonza          #+#    #+#             */
/*   Updated: 2022/10/06 10:46:22 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s) + 1;
	while (--len >= 0)
		if (s[len] == (char)c)
			return ((char *)s + len);
	if (!c && s[len] == (char)c)
		return ((char *)s + len);
	return (NULL);
}
