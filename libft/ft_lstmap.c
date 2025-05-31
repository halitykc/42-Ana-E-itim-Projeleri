/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 10:27:58 by hyakici           #+#    #+#             */
/*   Updated: 2025/05/31 15:48:40 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*reptr;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (0);
	reptr = NULL;
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		ft_lstadd_back(&reptr, newnode);
		lst = lst->next;
	}
	return (reptr);
}
