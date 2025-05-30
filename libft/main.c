/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:49:28 by hyakici           #+#    #+#             */
/*   Updated: 2025/05/30 08:13:32 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

void	del(void *a)
{
	free(a);
}
void	func(void *a)
{
	char	*s;

	s = (char *)a;
	if (*s >= 'a' && 'z' >= *s)
		*s -= 32;
}

int	main(void)
{
	t_list	*node;
	t_list	*son;

	node = ft_lstnew(ft_strdup("halit"));
	ft_lstadd_front(&node, ft_lstnew(ft_strdup("yakici")));
	printf("%s-->", (char *)node->content);
	printf("%s\n", (char *)node->next->content);
	printf("%i\n", ft_lstsize(node));
	printf("%s\n", (char *)ft_lstlast(node)->content);
	ft_lstadd_back(&node, ft_lstnew(ft_strdup("23 yaş")));
	printf("%s--->", (char *)node->content);
	printf("%s->>>", (char *)node->next->content);
	printf("%s\n", (char *)node->next->next->content);
	son = ft_lstlast(node);
	printf("%s\n", (char *)son->content);
	// ft_lstdelone(node->next->next, del);
	// node->next->next = NULL;
	/*while (node)
	{
		printf("%p %s %p\n", node, (char *)node->content, node->next);
		node = node->next;
	}*/
	/*ft_lstclear(&node, del);
	if (node == NULL)
	{
		printf("temizleme başarılı");
	}
	else
	{
		printf("nah");
	}*/
	ft_lstiter(node, func);
	while (node)
	{
		printf("adress %p %s %p\n", node, (char *)node->content, node->next);
		node = node->next;
	}
}
