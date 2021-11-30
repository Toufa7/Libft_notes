/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:32:00 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/27 00:04:04 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
This function create and return a new string by combining s1 and s2
The s1 is placed first, followed by the s2 string.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		j;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)); // allocating memory for the lenght of the 2 strings
	if (!join) // if the allocation fail please return NULL
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		join[j++] = s1[i++];
	}
	i = 0; // initialize index to start again on the 2nd string
	while (s2[i] != '\0')
	{
		join[j++] = s2[i++];
	}
	join[j] = '\0'; // copying until the NULL\terminator
	return (join);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "OH SANTI";
	char s2[] = " CAZORLA";
	printf("%s\n",ft_strjoin(s1,s2));
	return (0);
}
*/
