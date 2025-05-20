#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int  i;
    char    *ptr;

    if (!s || !f)
        return (0);
    if (!(ptr = malloc(ft_strlen(s) + 1)))
        return (0);
    i = 0;
    while (s[i])
    {
        ptr[i] = f(i,s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}