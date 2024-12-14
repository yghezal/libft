/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yghezal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:15:04 by yghezal           #+#    #+#             */
/*   Updated: 2024/11/21 18:10:06 by yghezal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*s1_new;
	unsigned int	i;
	unsigned int	j;
	unsigned int	index;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	s1_new = malloc(sizeof(char) * j - i + 1);
	if (!s1_new)
		return (NULL);
	index = 0;
	while (i < j)
	{
		s1_new[index] = s1[i];
		index++;
		i++;
	}
	s1_new[index] = '\0';
	return (s1_new);
}
