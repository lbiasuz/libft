/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:37:57 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/09 21:54:17 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*sa1;
	char			*sa2;
	unsigned int	i;

	i = 0;
	sa1 = s1;
	sa2 = s2;
	while (i < n && sa1[i] == sa2[i])
		i++;
	return (sa1[i] - sa2[i]);
}
