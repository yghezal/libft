/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yghezal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:47:42 by yghezal           #+#    #+#             */
/*   Updated: 2024/11/17 16:41:28 by yghezal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;
	size_t			i;

	if (!dest && !src && n > 0)
		return (NULL);
	i = 0;
	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	if (src < dest)
	{
		while (n--)
			dest_cpy[n] = src_cpy[n];
	}
	else
	{
		while (i < n)
		{
			dest_cpy[i] = src_cpy[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>
int main()
{
	char str1[] = "retteee dddde eerrr";
	char str2[5];

	ft_memmove(str2, str1, 5);
	printf("%s\n", str2);
}*/
