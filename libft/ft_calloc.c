/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yghezal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:28:13 by yghezal           #+#    #+#             */
/*   Updated: 2024/11/21 13:35:01 by yghezal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tmp;
	size_t	i;

	tmp = malloc(nmemb * size);
	i = 0;
	if (!tmp)
		return (NULL);
	if ((nmemb == 0) || (size == 0))
		return (tmp);
	while (tmp[i])
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *)tmp);
}
