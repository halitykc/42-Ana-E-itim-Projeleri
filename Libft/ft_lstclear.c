#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *ptrtonext;

    if(!lst || !del)
        return;
    while (*lst)
    {
        ptrtonext = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = ptrtonext;
    }
}