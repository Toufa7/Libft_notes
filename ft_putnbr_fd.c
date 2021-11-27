/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:59:58 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/22 15:54:00 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nbr;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n >= 0 && n <= 9)
	{
		nbr = n + '0';
		write(fd, &nbr, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		nbr = n % 10 + '0';
		write(fd, &nbr, 1);
	}
}
