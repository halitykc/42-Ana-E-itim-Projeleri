/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 10:27:58 by hyakici           #+#    #+#             */
/*   Updated: 2025/06/04 02:40:38 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*reptr;
	t_list	*newnode;
	char	*cont;

	if (!lst || !f || !del)
		return (NULL);
	reptr = NULL;
	while (lst)
	{
		cont = f(lst->content);
		newnode = ft_lstnew(cont);
		if (!newnode)
		{
			del(cont);
			ft_lstclear(&reptr, del);
			return (NULL);
		}
		ft_lstadd_back(&reptr, newnode);
		lst = lst->next;
	}
	return (reptr);
}
