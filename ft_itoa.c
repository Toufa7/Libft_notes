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
// first function dedicated for calculating the lenght of the int 
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
	while (num != 0) // so while the division of the number not equal 0 let's increase the index
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
	if (n < 0) // for checking if the number if negative then the sign will be 1 otherwise just skip and do not enter
		sign = 1;
	len = intlen(n);
	str = malloc(sizeof(char) * len + 1);
		nbr = n;
	if (!str)
		return (0);
	if (nbr < 0)
		nbr = -nbr;
	str[len--] = '\0'; // let's go the last index of the str and put a NULL\terminator (the same as str[len + 1] = because we start from zero) 
	while (len >= 0) 
	{
		str[len] = nbr % 10 + '0'; 
		nbr = nbr / 10;
		len--;
	}
	if (sign == 1)  // if the sign declared before was 1 than let's put a '-' at the first of the string 
		str[0] = '-';
	return (str);
}
