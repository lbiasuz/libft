/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:18:20 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/12 23:20:06 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, char c, size_t n)
{
	if (!n)
		return (NULL);
	while (n--)
		*((char *) s + n) = c;
	*(char *) s = c;
	return (s);
}
