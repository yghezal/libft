/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yghezal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:52:04 by yghezal           #+#    #+#             */
/*   Updated: 2024/11/28 16:41:08 by yghezal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	safe_malloc(char **vec, int pos, size_t buffer)
{
	int	i;

	vec[pos] = malloc(buffer);
	if (!vec[pos])
	{
		i = 0;
		while (i < pos)
		{
			free(vec[i]);
			i++;
		}
		free(vec);
		return (1);
	}
	return (0);
}

size_t	count_words(char const *s, char separator)
{
	size_t	count;
	size_t	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != separator && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*s == separator)
			in_word = 0;
		s++;
	}
	return (count);
}

int	fill(char **vec, char const *s, char separator)
{
	size_t	i;
	size_t	len;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == separator && s[i])
		i++;
		while (s[i + len] != separator && s[i + len])
		len++;
		if (len > 0)
		{
			if (safe_malloc(vec, j, len + 1))
				return (1);
			ft_strlcpy(vec[j], s + i, len + 1);
			j++;
		}
		i += len;
	}
	vec[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**vec;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	vec = malloc(sizeof(char *) * (words + 1));
	if (!vec)
		return (NULL);
	if (fill(vec, s, c))
	{
		free(vec);
		return (NULL);
	}
	return (vec);
}
