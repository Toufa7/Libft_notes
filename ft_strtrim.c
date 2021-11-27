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
		start++;
	while (start < end && s1[end] && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
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
