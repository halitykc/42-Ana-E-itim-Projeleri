/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 22:19:53 by hyakici           #+#    #+#             */
/*   Updated: 2025/05/31 16:24:03 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	size_t	j;
	char	*cont;

	if (!lst || !f)
		return ;
	while (lst)
	{
		cont = lst->content;
		j = 0;
		while (cont[j])
			f(&cont[j++]);
		lst = lst->next;
	}
}
