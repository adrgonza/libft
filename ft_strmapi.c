/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 01:40:13 by adrgonza          #+#    #+#             */
/*   Updated: 2022/09/28 18:24:09 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (0);
	str = (char *)ft_calloc(ft_strlen(s), 1);
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = f((unsigned int) i, s[i]);
	return (str);
}
