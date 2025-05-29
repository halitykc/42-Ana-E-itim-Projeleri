/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:24:43 by hyakici           #+#    #+#             */
/*   Updated: 2025/05/29 12:17:02 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstlast(t_list *list)
{
	if (!list)
		return (0);
	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
}
