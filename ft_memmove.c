/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:14:19 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/07 20:26:14 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = -1;
	if (dest > src)
		while (n--)
			*((char *) dest + n) = *((char *) src + n);
	else
		while (++i < n)
			*((char *) dest + i) = *((char *) src + i);
	return (dest);
}
