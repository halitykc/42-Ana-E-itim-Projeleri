#include "libft.h"

int strBaseIndex(char c, char *base)
{
    int i;

    i = 0;
    while (base[i] != c)
        i++;
    return (i);
    
}

int ft_power(int nb, int power)
{
    int i;
    int total;

    total = 1;
    i = 0;
    while (i < power)
    {
        total *= nb;
        i++;
    }
    return (total);
}

int ft_atoi_base(char *str, char *base)
{
    int baseLen;
    int strLen;
    int i;
    int res;

    i = 0;
    res = 0;
    baseLen = ft_strlen(base);
    strLen = ft_strlen(str) -1;

    while (str[i])
    {
        res += strBaseIndex(str[i], base) * ft_power(baseLen, (strLen - i));
        i++;
    }
    
    return (res);
}
