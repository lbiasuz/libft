/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:35:10 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/20 01:16:16 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	split_count(char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!(*s))
			break;
		while (*s != c && *s != 0)
			s++;
		i++;
	}
	return (i);
}


char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*aux;
	int		i;
	int		j;

	i = split_count((char *) s, c);
	tab = malloc(sizeof(char *) * (i + 1));
	if (!tab)
		return (NULL);
	while (split_count((char *) s, c))
	{
		j = 0;
		while (s[j] && s[j] != c)
			j++;
		aux = malloc(sizeof(char) * (j + 1));
		if (!aux)
			return (NULL);
		tab[i - split_count((char *) s, c)] = aux;
		s += ft_strlcpy(aux, s, j + 1);
	}
	return (tab);
}


// static int	split_count(char const *s, char c)
// {
// 	unsigned int i;

// 	i = 0;
// 	while(*s)
// 	{
// 		if (ft_strchr(s, c))
// 	}
// 	return (i);
// }

// char **ft_split(char const *s, char c)
// {
// 	unsigned int	i;
// 	unsigned int	j;
// 	char			*sub;
// 	char			**array;

// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 		{
// 			sub = (char *) malloc(sizeof(char) + 1);
// 			ft_strlcpy(sub, s, i + 1);
// 			array[j] = sub;
// 			s = &s[i + 1];
// 			j++;
// 			i = 0;
// 		}
// 		i++;
// 	}
// 	array[j] = NULL;
// 	return (array);
// }