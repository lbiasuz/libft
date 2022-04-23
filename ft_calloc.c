/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:47:16 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/23 08:23:26 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	char			*s;

	i = 0;
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	s = malloc((nmemb * size));
	if (!s)
		return (NULL);
	while (i <= (nmemb * size) - 1)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
