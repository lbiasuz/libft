/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:35:10 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/21 00:20:27 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	split_count(char const *s, char c)
{
	int				i;
	char			*a;

	i = 0;
	a = (char *) s;
	while (*a)
	{
		while (*a == c)
			a++;
		if (!(*a))
			break;
		while (*a != c && *a != 0)
			a++;
		i++;
	}
	return (i);
}

static int	word_len(char const *s, char c)
{
	unsigned int	i;
	char			*a;

	i = 0;
	a = (char *) s;
	while (*a == c)
		a++;
	while (a[i] && a[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*aux;
	int		wc;
	int		j;

	j = 0;
	wc = split_count((char *) s, c);
	tab = malloc(sizeof(char **) * (wc + 1));
	if (!tab)
		return (NULL);
	while (split_count(&s[j], c))
	{
		while (s[j] == c)
			j++;
		aux = malloc(sizeof(char) * (word_len(&s[j], c) + 1));
		if (!aux)
			return (NULL);
		ft_strlcpy(aux, &s[j], word_len(&s[j], c) + 1);
		tab[wc - split_count(&s[j], c)] = aux;
		j += word_len(&s[j], c);
	}
	tab[wc] = NULL;
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