/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:26:12 by adrgonza          #+#    #+#             */
/*   Updated: 2022/09/13 22:58:46 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	b;

	if (*s2 == 0)
		return ((char *) s1);
	a = 0;
	while (a < n && s1[a] != '\0')
	{
		b = 0;
		while (a + b < n && s1[a + b] == s2[b] && s2[b] != '\0')
			b++;
		if (s2[b] == '\0')
			return ((char *)s1 + a);
		a++;
	}
	return (NULL);
}
