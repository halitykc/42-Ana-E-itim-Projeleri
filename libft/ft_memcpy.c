/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:31:36 by hyakici           #+#    #+#             */
/*   Updated: 2025/05/31 17:36:35 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*c;

	if (!dest && !src)
		return (dest);
	p = (unsigned char *)dest;
	c = (unsigned char *)src;
	while (n--)
	{
		*p++ = *c++;
	}
	return (dest);
}
