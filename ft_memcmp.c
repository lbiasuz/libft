/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:37:57 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/16 15:18:51 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*aux1;
	char			*aux2;
	unsigned int	i;

	i = 0;
	aux1 = (char *) s1;
	aux2 = (char *) s2;
	if (!n)
		return (0);
	while (i < n - 1 && aux1[i] == aux2[i])
		i++;
	return (aux2[i] - aux1[i]);
}
