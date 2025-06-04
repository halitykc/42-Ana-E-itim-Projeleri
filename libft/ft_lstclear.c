/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:23:48 by hyakici           #+#    #+#             */
/*   Updated: 2025/06/04 01:58:52 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptrtonext;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		ptrtonext = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptrtonext;
	}
}
