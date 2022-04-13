/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:22:59 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/12 21:22:54 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;

	i = 0;
	if (!ft_strlen(little))
		return ((char *) big);
	while (*big && len)
	{
		if (big[i] == little[i])
			i++;
		if (i == ft_strlen(little))
			return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}
