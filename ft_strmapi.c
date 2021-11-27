/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:43:13 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/27 00:19:24 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	size_t	memory;
	char	*str;

	if (s == 0 || f == 0)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	memory = (sizeof(char) * len + 1);
	str = malloc(memory);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char iterating(unsigned int i, char c)
{
	i = 1; // this index is the one which our string will be iterate with
	c = c + i;
	return (c);
}

int	main()
{
	printf("%s\n",ft_strmapi("ABCD",iterating));
	return (0);
}