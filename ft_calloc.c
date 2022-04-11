/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:47:16 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/10 22:50:15 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *calloc(size_t nmemb, size_t size)
{
	int	i;

	i = 0;
	char *s = (char *) malloc(nmemb * size);
	if (!s)
		return (NULL);
	while (i < nmemb * size)
	{
		s[i] = '\0';
		i++;
	}
	
	return (s);
}