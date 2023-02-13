/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:19:59 by adrgonza          #+#    #+#             */
/*   Updated: 2022/09/06 12:56:06 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	if (n == 0)
		return (0);
	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0' && c < n -1)
		c++;
	if (n == c)
		return (0);
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
