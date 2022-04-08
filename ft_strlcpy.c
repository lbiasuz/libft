/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:20:45 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/07 23:49:50 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int		i;
	int					src_l;
	char				*d;

	i = 0;
	src_l = ft_strlen(src);
	while (i < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	*dest = '\0';
	return (src_l);
}
