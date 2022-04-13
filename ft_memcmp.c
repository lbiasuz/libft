/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:37:57 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/12 23:34:46 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*sa1;
	char			*sa2;
	unsigned int	i;

	i = 0;
	sa1 = (char *) s1;
	sa2 = (char *) s2;
	if (!n)
		return (0);
	while (i < n - 1 && sa1[i] == sa2[i])
		i++;
	return (sa2[i] - sa1[i]);
}
