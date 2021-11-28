/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:47:59 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/27 00:17:15 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* The first function helps to calculate the length of the int */
static int	intlen(int num)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
	{
		neg = 1;
		num = num * -1;
	}
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i + neg);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			sign;
	int			len;
	char		*str;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = intlen(n);
	str = malloc(sizeof(char) * len + 1);
		nbr = n;
	if (!str)
		return (0);
	if (nbr < 0)
		nbr = -nbr;
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
