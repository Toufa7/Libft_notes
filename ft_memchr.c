/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:31:04 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/24 12:31:36 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*memory_area;
	unsigned char	byte;

	i = 0;
	memory_area = (char unsigned *)s;
	byte = (unsigned char)c;
	while (i < n)
	{
		if (memory_area[i] == byte)
			return (&memory_area[i]);
		i++;
	}
	return (NULL);
}

/*
strchr expects that the first parameter is null-terminated,
and sence doesn't require a length parameter
memchr works similarly but doesn't expect that the memory block is null-terminated,
so you may be searching for a \0 character successfully.

int	main()
{
	char *search = ft_memchr("1337 BG", ' ',7);
	printf("%s\n",search);
	return (0);
}
*/