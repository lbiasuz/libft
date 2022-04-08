/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:49:52 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/08 00:03:54 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
		i++;
	size -= i;
	while (size && *src)
	{
		dest[i] = *src;
		i++;
		src++;
		size--;
	}
	dest[i] = '\0';
	return (i);
}
