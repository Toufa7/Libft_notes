/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:52:50 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/21 13:39:35 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*string;
	unsigned char	alpha;
	char			*rslt; // This variable insted of looking backword it will start from 0 and store the char whenever it located  	

	string = (char *)s;
	alpha = c;
	rslt = 0;
	i = 0;
	while (string[i])
	{
		if (string[i] == alpha)
			rslt = &string[i]; // so instead of returning the first occurrence in the string the variable rslt keep holding the charachter while she's looping on the string
		i++;
	}
	if (alpha == 0) // just a protecting so if the alpha was not there return the string 
		return (&string[i]);
	return (rslt);
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
	char str[] = "1337 42 NETWORK 42"; // it work as strchr except she's looking for the character backword(str(right)chr)
	printf("%s\n", ft_strchr(str,'4'));
	printf("%s\n", strchr(str,'4'));
	return (0);
}
*/
