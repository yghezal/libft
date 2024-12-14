/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yghezal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:42:35 by yghezal           #+#    #+#             */
/*   Updated: 2024/11/26 15:13:00 by yghezal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	tabsize(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t			i;
	long int		size;
	char			*nb;

	size = n;
	i = tabsize(n);
	if (n < 0)
	{
		size = -size;
		i++;
	}
	nb = malloc(sizeof(char) * (i + 1));
	if (!nb)
		return (NULL);
	nb[i] = '\0';
	if (size == 0)
		nb[0] = 48;
	while (i--)
	{
		nb[i] = size % 10 + 48;
		size /= 10;
	}
	if (n < 0)
		nb[0] = '-';
	return (nb);
}
