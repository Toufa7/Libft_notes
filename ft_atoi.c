/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:26:53 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/27 00:41:44 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	rslt;
	int	sign;

	i = 0;
	rslt = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign = -sign ;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = (rslt * 10) + (str[i] - '0');
		i++;
	}
	return (rslt * sign);
}

/*
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("2147483647"));
	return (0);
}
*/

