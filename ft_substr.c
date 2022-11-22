/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:19:06 by adrgonza          #+#    #+#             */
/*   Updated: 2022/11/18 17:19:25 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	a;

	if (!s)
		return (NULL);
	if (ft_strlen(s) == 0)
		return (ft_strdup(s));
	a = ft_strlen(s);
	if (start > a - 1)
		len = 0;
	else if (len > a - start)
		len = a - start;
	str = (char *)malloc(sizeof(char) *(len + 1));
	if (!str)
		return (NULL);
	if (len == 0)
		return (ft_memset(str, 0, 1));
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
