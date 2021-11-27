/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:26:19 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/23 20:42:42 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || (s[i - 1] == c && s[i] != c))
			count++;
		i++;
	}
	return (count);
}

static char	**split_support(char **arr, char const *s, char c)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len = i;
		while (s[len] && s[len] != c)
			len++;
		if (s[i])
		{
			arr[j] = malloc((len - i + 1) * sizeof(char));
			ft_strlcpy(arr[j++], s + i, len - i + 1);
		}
		i = len;
	}
	arr[j] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	split_support(arr, s, c);
	return (arr);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main()
{
	int i = 0;
	char splt[] = "*HEY*I'M*POMS*";
	char **TWOD = ft_split(splt,'*');
	while (TWOD[i])
	{
		printf("%s\n",TWOD[i++]);
	}
	return (0);
}
*/
