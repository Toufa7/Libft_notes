/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:38:25 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/16 21:21:37 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
This function allows you to compare a 2 blocks of memory
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*first;
	unsigned char	*second;

	i = 0;
	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	while (i < n)
	{
		if (second[i] != first[i])
			return (first[i] - second[i]);
		i++;
	}
	return (0);
}
