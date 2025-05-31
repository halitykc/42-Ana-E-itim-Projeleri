/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:49:28 by hyakici           #+#    #+#             */
/*   Updated: 2025/05/31 15:53:32 by hyakici          ###   ########.fr       */
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
	while (s[i] && (*s >= 'a' && *s <= 'z'))
		s[i++] -= 32;
	return (s);
}

int	main(void)
{
	t_list	*node;
	t_list	*son;
	t_list	*mfn;

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
	// ft_lstiter(node, func);
	// while (node)
	// {
	// 	printf("adress %p %s %p\n", node, (char *)node->content, node->next);
	// 	node = node->next;
	// }
	mfn = ft_lstmap(node, func, del);
	while (mfn)
	{
		printf("adress %p %s %p\n", mfn, (char *)mfn->content, mfn->next);
		mfn = mfn->next;
	}
}
