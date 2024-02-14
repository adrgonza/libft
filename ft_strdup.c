/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:09:11 by adrgonza          #+#    #+#             */
/*   Updated: 2022/09/14 19:15:32 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;

	a = (char *)ft_calloc(sizeof(char), ft_strlen(s1) + 1);
	if (!a)
		return (NULL);
	ft_strlcpy(a, s1, ft_strlen(s1) + 1);
	return (a);
}
