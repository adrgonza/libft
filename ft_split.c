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
	int	i;
	int	n_words;

	i = 0;
	n_words = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
		n_words++;
	}
	return (n_words);
}

int	ft_count_letters(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*ft_freeg(char **words)
{
	int	i;

	i = 0;
	while (words[i])
		free(words[i++]);
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		count;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	words = ft_calloc(sizeof(char *), (count + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (count--)
	{
		while (*s == c && *s)
			s++;
		words[i] = ft_calloc((sizeof(char)), (ft_count_letters(s, c) + 1));
		if (!words[i])
			return ((char **)ft_freeg(words));
		j = 0;
		while (*s != c && *s)
			words[i][j++] = *s++;
	}
	return (words);
}
