#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;
	size_t	i;

	p = (unsigned char*)str;
	i = 0;
	while (i < n)
	{
		p[i++] = c;
	}
	return (str);
	
}