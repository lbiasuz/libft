/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:22:41 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/24 18:21:19 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	printf("B: %p \n", (*lst));
	*lst = ft_lstlast(*lst);
	printf("A: %p \n", (*lst));
	if (!(*lst))
		*lst = new;
	else
		(*lst)->next = new;
}
