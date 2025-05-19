#include "libft.h"

int ft_set_control(char const *set, char c)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char    *ptr;

    i = 0;
    j = ft_strlen(s1) - 1;
    while (ft_set_control(set,s1[i]))
        i++;
    while (ft_set_control(set,s1[j]))
        j--;
    ptr = ft_substr(s1, i, (j - i + 1));
    return (ptr);
}
