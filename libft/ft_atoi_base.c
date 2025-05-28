/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:09:03 by hyakici           #+#    #+#             */
/*   Updated: 2025/05/26 17:11:04 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strbaseindex(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int	ft_power(int nb, int power)
{
	int	i;
	int	total;

	total = 1;
	i = 0;
	while (i < power)
	{
		total *= nb;
		i++;
	}
	return (total);
}

int	ft_atoi_base(char *str, char *base)
{
	int	baselen;
	int	strlen;
	int	i;
	int	res;

	i = 0;
	res = 0;
	baselen = ft_strlen(base);
	strlen = ft_strlen(str) - 1;
	while (str[i])
	{
		res += strbaseindex(str[i], base) * ft_power(baselen, (strlen - i));
		i++;
	}
	return (res);
}
