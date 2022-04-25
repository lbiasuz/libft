/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:45:53 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/04/25 01:23:38 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*aux;

	dest = NULL;
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			ft_lstclear(&aux, del);
			return (NULL);
		}
		ft_lstadd_back(&dest, aux);
		lst = lst->next;
	}
	return (dest);
}
