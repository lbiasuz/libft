/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:11:39 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/05 23:35:59 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	return (1);
}

static int	ft_islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	return (1);
}

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
