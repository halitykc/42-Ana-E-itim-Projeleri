/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:49:28 by hyakici           #+#    #+#             */
/*   Updated: 2025/06/04 02:41:30 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

void	del(void *a)
{
	free(a);
}

void	*func(void *a)
{
	char	*s;
	int		i;

	s = (char *)a;
	i = 0;
	while (s[i] && (s[i] >= 'a' && s[i] <= 'z'))
		s[i++] -= 32;
	return (s);
}

int	main(void)
{
	t_list	*node;
	t_list	*newnode;

	node = ft_lstnew(ft_strdup("halit"));
	printf("%s\n", (char *)node->content);
	newnode = ft_lstmap(node, func, free);
	printf("%s\n", (char *)newnode->content);
	ft_lstclear(&node, free);
	free(newnode);
}
