/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:10:06 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/27 00:13:21 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
calloc does indeed touch the memory (it writes zeroes on it)
u can use the function bzero unstead (booked,memory)
*/

void	*ft_calloc(size_t count, size_t size)
{
	char	*booked;
	size_t	memory;
	size_t	i;

	i = 0;
	memory = count * size;
	booked = (void *)malloc(memory);
	if (booked == NULL)
		return (NULL);
	while (i < memory)
	{
		booked[i] = 0; // here ft_bzero(booked,memory) & remove the while 
		i++;
	}
	return (booked);
}

/*
int    main()
{
	char *fill;
	fill = ft_calloc(2,sizeof(int));
	printf("%s",fill);
	return (0);
}
*/
