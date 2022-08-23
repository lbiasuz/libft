/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:44:02 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/08/22 22:40:03 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(char *src, char c)
{
	int	i;

	i = 0;
	if (!src)
		return (-1);
	while (src[i] && src[i] != c)
		i++;
	if (src[i] == c)
		return (i);
	return (-1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

char	*ft_strjoin(char **s1, char **s2)
{
	char			*join;
	unsigned int	s1_len;
	unsigned int	s2_len;

	s1_len = ft_strlen(*s1);
	s2_len = ft_strlen(*s2);
	join = malloc(ft_strlen(*s1) + ft_strlen(*s2) + 1);
	if (!join)
		return (NULL);
	ft_strlcpy(join, *s1, s1_len + 1);
	ft_strlcpy(join + s1_len, *s2, s2_len + 1);
	return (join);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	start_len;

	if (start < ft_strlen(s))
		start_len = ft_strlen(s + start);
	else
		start_len = len;
	if (s + start > s + ft_strlen(s))
	{
		sub = malloc(1);
		*sub = '\0';
		return (sub);
	}
	else if (start_len < len)
		sub = malloc(start_len + 1);
	else
		sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, (s + start), len + 1);
	return (sub);
}
