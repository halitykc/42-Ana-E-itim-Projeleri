#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*str;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	if(!(str = malloc(total_len + 1)))
		return (0);
	ft_memcpy(str,s1,ft_strlen(s1));
	ft_memcpy(str + ft_strlen(s1),s2,ft_strlen(s2));
	str[total_len] = '\0';

	return (str);
}