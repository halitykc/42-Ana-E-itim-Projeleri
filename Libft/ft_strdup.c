#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (0);
	ft_memcpy(ptr,s,ft_strlen(s) + 1);
	return (ptr);
}