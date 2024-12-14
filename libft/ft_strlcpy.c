/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yghezal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:37:09 by yghezal           #+#    #+#             */
/*   Updated: 2024/11/17 16:35:49 by yghezal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t			i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}
/*#include <stdio.h>
int main()
{
	char str1[] = "qwertyuiopasdfgh";
	char str2[] = "ttttttt";

	size_t len = ft_strlcpy(str2, str1, 8);
	printf("%zu %s\n", len, str2);
}*/
