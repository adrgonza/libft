/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:41:18 by adrgonza          #+#    #+#             */
/*   Updated: 2022/11/18 17:27:07 by adrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(const char *s, char c)
{
	int	a;
	int	b;

	b = 0;
	a = 0;
	while (s[a] == c && s[a])
		a++;
	while (s[a])
	{
		while (s[a] != c && s[a])
			a++;
		while (s[a] == c && s[a])
			a++;
		b++;
	}
	return (b);
}

int	ft_count_letters(const char *s, char c)
{
	int	a;

	a = 0;
	while (s[a] != c && s[a])
		a++;
	return (a);
}

char	*ft_freeg(char **words)
{
	int	b;

	b = 0;
	while (words[b])
	{
		free(words[b]);
		b++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		count;
	int		a;
	int		b;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	words = ft_calloc(sizeof(char *), (count + 1));
	if (!words)
		return (NULL);
	b = 0;
	while (count--)
	{
		while (*s == c && *s)
			s++;
		a = 0;
		words[b] = malloc((sizeof(char)) * (ft_count_letters(s, c) + 1));
		if (!words[b])
			return ((char **)ft_freeg(words));
		while (*s != c && *s)
			words[b][a++] = *s++;
		words[b++][a] = 0;
	}
	return (words);
}
