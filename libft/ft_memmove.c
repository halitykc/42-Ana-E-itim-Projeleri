/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:32:42 by hyakici           #+#    #+#             */
/*   Updated: 2025/05/31 17:37:44 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_d;
	unsigned char	*src_s;

	if (!dest && !src)
		return (dest);
	dest_d = (unsigned char *)dest;
	src_s = (unsigned char *)src;
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
