/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:01:05 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/12 21:26:35 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	unsigned int	i;
	char			*d;

	i = ft_strlen(s);
	d = (char *) malloc(i);
	ft_strlcpy(d, s, i);
	if (ft_strlen(d) != i)
		return (NULL);
	return (d);
}
