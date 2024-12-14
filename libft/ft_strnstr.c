/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yghezal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:56:50 by yghezal           #+#    #+#             */
/*   Updated: 2024/11/19 16:14:45 by yghezal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while ((big[i]) && (i < len))
	{
		j = 0;
		while ((little[j] == big[i + j]) && (i + j < len))
		{
			if (little[j + 1] == '\0')
				return (((char *)big) + i);
			j++;
		}
		i++;
	}
	return ((char *) NULL);
}
