/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:40:22 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/23 18:59:41 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	alpha;
	char			*string;

	string = (char *)s;
	alpha = c;
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == alpha)
			return (&string[i]);
		i++;
	}
	if (alpha == 0)
		return (&string[i]);
	return (0);
}

/*
strchr expects that the first parameter is null-terminated,
and sence doesn't require a length parameter
memchr works similarly but doesn't expect that the memory block is null-terminated,
so you may be searching for a \0 character successfully.

#include <stdio.h>
#include <string.h>
int	main()
{
	char str[] = "1337 42 NETWORK";
	printf("%s\n", ft_strchr(str,'4'));
	printf("%s\n", strchr(str,'4'));
	return (0);
}
*/