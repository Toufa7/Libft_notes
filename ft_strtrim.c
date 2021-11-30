/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:34:28 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/23 19:56:04 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = 0; 
	end = ft_strlen(s1) - 1; 
	while (s1[start] && ft_strchr(set, s1[start]))
		start++; // This variable well count starting from zero and stop when found set on string we well be using ft_strchr 
	while (start < end && s1[end] && ft_strchr(set, s1[end]))
		end--; // The same except well count starting backward
	return (ft_substr(s1, start, (end - start + 1))); // We can use the ft_substr to get the string by triming the index of start and len will be (len - start + NULL\terminator)
}


/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char totrim = "O_OPOMSO_O";
	printf("%s\n",ft_strtrim(totrim,"O_O"));
	return (0);
}
*/
