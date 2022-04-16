/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:49:52 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/16 02:19:10 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <memory.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	i;
	unsigned int	off;

	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	off = dl;
	i = 0;
	if (size == 0)
		return (sl);
	else if (size < dl)
		return (size+sl);
	while (*(src+i) != '\0' && off < size - 1)
	{
		*(dest+off) = *(src+i);
		i++;
		off++;
	}
	*(dest+off) = '\0';
	return (dl+sl);
}

// int	main (void)
// {
// 	char dest[30];
// 	char *src = (char *)"AAAAAAAAA";
	
// 	dest[0] = 'B';
// 	dest[1] = '\0';
// 	printf("FT: %ld \n", ft_strlcat(dest, src, 0));
// 	printf("String: %s \n", dest);
// 	dest[0] = 'B';
// 	printf("FT: %ld \n", ft_strlcat(dest, src, 1));
// 	printf("String: %s \n", dest);
// 	memset(dest, 'B', 4);
// 	printf("FT: %ld \n", ft_strlcat(dest, src, 3));
// 	printf("String: %s \n", dest);
// 	memset(dest, 'B', 4);
// 	printf("FT: %ld \n", ft_strlcat(dest, src, 6));
// 	printf("String: %s \n", dest);
// 	memset(dest, 'C', 15);
// 	printf("FT: %ld \n", ft_strlcat(dest, src, 17));
// 	printf("String: %s \n", dest);
// }

// size_t	ft_strlcat(char *dest, const char *src, size_t size)
// {
// 	unsigned int	di;
// 	unsigned int	si;

// 	si = 0;
// 	if (size == 0)
// 		return (ft_strlen(src));
// 	i = ft_strlen(dest) + 1;
// 	// if (ft_strlen(dest) < size)
// 	// 	size++;
// 	while (i <= size + 1 && src[si])
// 	{
// 		dest[i] = src[si];
// 		si++;
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (ft_strlen(dest)+ft_strlen(src));
// }


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
