#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *a;

    if (!(a = malloc(sizeof(t_list))))
        return (0);
    (*a).content = content;
    (*a).next = NULL;
    return (a);
}