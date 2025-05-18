#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		p[i++] = 0;
	}
}
