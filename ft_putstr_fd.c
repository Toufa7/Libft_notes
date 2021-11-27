/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:41:09 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/21 13:41:20 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == 0)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
#include <fcntl.h>
#include <stdio.h>
int	main()
{
	int fd = open("str.txt", O_CREAT , O_RDWR )
	ft_putstr_fd("POMS",1)
	return (0);
}

// more detail check $ulimit -a & ps
*/