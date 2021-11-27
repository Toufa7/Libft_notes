/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:09:56 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/16 21:15:54 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
This function copies n characters from src to dst and return a pointer to it (dst)
memcpy copies without any problem even if memory overlaps 
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_area;
	char	*src_area;
	size_t	i;

	src_area = (char *)src;
	dst_area = (char *)dst;
	if (dst_area == 0 && src_area == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst_area[i] = src_area[i];
		i++;
	}
	return (dst_area);
}
