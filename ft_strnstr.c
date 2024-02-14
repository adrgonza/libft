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
	size_t	i;
	size_t	j;

	if (*s2 == 0)
		return ((char *) s1);
	i = -1;
	while (s1[++i] && i < n)
	{
		j = 0;
		while (s2[j] && i + j < n && s1[i + j] == s2[j])
			j++;
		if (!s2[j])
			return ((char *)s1 + i);
	}
	return (NULL);
}
