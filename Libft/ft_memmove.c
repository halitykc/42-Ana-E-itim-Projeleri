#include "libft.h"

void	*ft_memmove(void *dest, const void	*src, size_t n)
{
	unsigned char	*dest_d;
	unsigned char	*src_s;

	dest_d = (unsigned char*)dest;
	src_s = (unsigned char*)src;

	if (dest > src)
	{
		while (n)
		{
			n--;
			dest_d[n] = src_s[n];
		}
	}
	else
	{
		while (n--)
		{
			*dest_d++ = *src_s++;
		}
		
	}
	return (dest);
}