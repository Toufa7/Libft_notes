/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:33:07 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/10 12:04:54 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		a;
	size_t		b;
	char		*hay;

	hay = (char *)haystack;
	if (needle[0] == 0)
		return (hay);
	if (!len)
		return (NULL);
	a = 0;
	while (hay[a] && a < len)
	{
		b = 0;
		while (hay[a + b] == needle[b] && a + b <= len)
		{
			if (needle[b + 1] == 0)
				return (&hay[a]);
			b++;
		}
		a++;
	}
	return (NULL);
}
