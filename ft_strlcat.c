/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:49:52 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/15 03:30:19 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	si;

	si = 0;
	if (size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dest) + 1;
	// if (ft_strlen(dest) < size)
	// 	size++;
	while (i <= size + 1 && src[si])
	{
		dest[i] = src[si];
		si++;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest)+ft_strlen(src));
}


// size_t	ft_strlcat(char *dest, const char *src, size_t size)
// {
// 	unsigned int	i;

// 	i = ft_strlen(dest);
// 	size -= i;
// 	while (size && *src)
// 	{
// 		dest[i] = *src;
// 		i++;
// 		src++;
// 		size--;
// 	}
// 	dest[i] = '\0';
// 	return (i);
// }
