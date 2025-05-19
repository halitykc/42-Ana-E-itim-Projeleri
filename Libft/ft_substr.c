#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub = malloc(len + 1);
	if (!sub)
		return (0);
	ft_memcpy(sub,&s[start],len);
	sub[len] = '\0';
	return (sub);
}