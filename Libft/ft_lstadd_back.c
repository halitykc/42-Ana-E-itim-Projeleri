#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *a;

    if (!lst || !new)
        return;
    if (*lst)
    {
        a = ft_lstlast(*lst);
        a->next = new;
    }
    else
        *lst = new;   
    
}