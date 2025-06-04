/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 22:19:53 by hyakici           #+#    #+#             */
/*   Updated: 2025/06/03 20:28:50 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	char	*cont;

	if (!lst || !f)
		return ;
	while (lst)
	{
		cont = lst->content;
		f(cont);
		lst = lst->next;
	}
}
