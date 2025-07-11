#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr; 
	
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (0);
	ft_bzero(ptr,nmemb * size);
	return (ptr);
}