/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:49:52 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/16 15:00:18 by lbiasuz          ###   ########.fr       */
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
		return (size + sl);
	while (*(src + i) != '\0' && off < size - 1)
	{
		*(dest + off) = *(src + i);
		i++;
		off++;
	}
	*(dest + off) = '\0';
	return (dl + sl);
}
