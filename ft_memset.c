/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:24:11 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/21 13:40:54 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
This function for object to set & fill a block of memory with a particular value (int c)
First we need to convert the int c value to unsigned char 
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*memory_block;
	unsigned char	byte;

	byte = (unsigned char)c;
	memory_block = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		memory_block[i] = byte;
		i++;
	}
	return (memory_block);
}
/*
int main ()
{
	int i = 0;
	int arr[5] = {1, 3, 3, 4, 5};
	ft_memset(arr, 0, sizeof(int)*5);
	while (i < 5)
	{
		printf("%d\n", arr[i++]);
	}
}
/*
