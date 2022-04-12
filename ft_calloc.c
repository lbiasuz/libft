/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:47:16 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/11 21:23:38 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t nmemb, size_t size)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *) malloc(nmemb * size);
	if (!s)
		return (NULL);
	while (i < nmemb * size)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
