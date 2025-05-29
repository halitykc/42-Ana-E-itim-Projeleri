/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:04:06 by hyakici           #+#    #+#             */
/*   Updated: 2025/05/29 09:07:23 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digt(int i)
{
	int	s;

	s = 0;
	if (i == 0)
		return (1);
	while (i)
	{
		i /= 10;
		s++;
	}
	return (s);
}

static void	ft_fill_res(int n, char *result, int len)
{
	int	number;

	number = n;
	if (n < 0)
		number = -n;
	result[len] = '\0';
	while (len)
	{
		result[--len] = number % 10 + '0';
		number /= 10;
	}
	if (n < 0)
		result[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == -2147483648)
	{
		result = ft_strdup("-2147483648");
		return (result);
	}
	if (n < 0)
		len = ft_count_digt(-n) + 1;
	else
		len = ft_count_digt(n);
	result = malloc(len + 1);
	if (!result)
		return (0);
	ft_fill_res(n, result, len);
	return (result);
}
