#include "libft.h"

int ft_wc(char const *s, char c)
{
    int i;
    int inword;
    int count;

    inword = 0;
    count = 0;
    i = -1;
    while (s[++i])
    {
        if(s[i] != c && inword == 0)
        {
            inword = 1;
            count++;
        }
        else if (s[i] == c && inword != 0)
            inword = 0;
    }
    return (count);
}

void    ft_findnword(int *start, int *end, char const *s, char c)
{
    *start = *end;
    while (s[*start] && s[*start] == c)
        (*start)++;
    *end = *start;
    while (s[*end] && s[*end] != c)
        (*end)++;
}

void    ft_fill_w(char **res, char const *s, char c, int num)
{
    int i;
    int start;
    int end;
    int len;

    start = 0;
    end = 0;
    i = 0;
    while (i < num)
    {
        ft_findnword(&start, &end, s, c);
        len = end - start;
        res[i] = ft_substr(s, (unsigned int)start, (size_t)len);
        i++;
    }
    res[i] = 0;
}

char    **ft_split(char const *s, char c)
{
    char **res;
    int wnumber;

    if (!s)
        return (0);
    wnumber = ft_wc(s,c);
    res = malloc((wnumber + 1) * sizeof(char *));
    if (!res)
        return (0);
    ft_fill_w(res, s, c, wnumber);
    return (res);
}