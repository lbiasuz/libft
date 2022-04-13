/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:01:05 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/12 22:58:00 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	i;
	char			*d;

	i = ft_strlen(s);
	d = (char *) malloc(i);
	if (!d)
		return (NULL);
	ft_strlcpy(d, s, i);
	if (ft_strlen(d) != i)
		return (NULL);
	return (d);
}
