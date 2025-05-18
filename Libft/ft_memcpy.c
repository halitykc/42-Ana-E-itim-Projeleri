#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p = (unsigned char*)dest;
	unsigned char	*c = (unsigned char*)src;

	while (n--)
	{
		*p++ = *c++;
	}
	return (dest);
}
