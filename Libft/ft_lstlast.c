#include "libft.h"

t_list  *ft_lstlast(t_list *list)
{
    if (!list)
        return (0);
    while (list->next != NULL)
    {
        list = list->next;
    }
    return (list);
}