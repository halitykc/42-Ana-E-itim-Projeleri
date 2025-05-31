/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:39:14 by hyakici           #+#    #+#             */
/*   Updated: 2025/05/31 17:00:20 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	alen;

	if ((!s || !len) || start >= ft_strlen(s))
		return ((char *)ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s) - start)
		alen = ft_strlen(s) - start;
	else
		alen = len;
	sub = malloc(alen + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start] && i < ft_strlen(s) && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
