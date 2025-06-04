/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 11:47:58 by hyakici           #+#    #+#             */
/*   Updated: 2025/06/04 02:23:27 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	control(int s, long long res, int c)
{
	if (c >= 20 && s == -1)
		return (0);
	else if (c >= 20)
		return (-1);
	return (s * res);
}

int	ft_atoi(const char *nptr)
{
	int			i;
	long long	res;
	int			s;
	int			c;

	res = 0;
	s = 1;
	i = 0;
	c = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while ((nptr[i] >= '0' && nptr[i] <= '9') && nptr[i])
	{
		res = res * 10 + (nptr[i++] - '0');
		if (res != 0)
			c++;
	}
	return (control(s, res, c));
}
