/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:49:28 by hyakici           #+#    #+#             */
/*   Updated: 2025/05/29 03:01:19 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

char	my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return (str - 32);
}

void	my_func2(unsigned int i, char *str)
{
	(void)i;
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
}

int	main(void)
{
	int		a[] = {2552, 42566, 62323};
	int		i;
	int		dest[3] = {12, 11, 42};
	int		c;
	char	str[100] = "Merhaba, dunya!";

	printf("ISALPHA :%i\n", ft_isalpha(97));
	printf("IS DIGIT %i\n", ft_isdigit(48));
	printf("ISALNUM %i\n", ft_isalnum(97));
	printf("ISASCII %i\n", ft_isascii(0));
	printf("ISPRINT %i\n", ft_isprint(1344324));
	printf("STRLEN %i\n", ft_strlen("hai"));
	printf("MEMSET %p\n", ft_memset(a, 251, 1));
	// ft_memset(a, 255, 4);
	// ft_bzero(a, sizeof(a));
	i = 10;
	c = 20;
	ft_memcpy(&dest[0], &c, 4);
	printf("%i %i\n", dest[0], c);
	ft_memmove(str + 9, str, 7);
	printf("%s", str);
}
