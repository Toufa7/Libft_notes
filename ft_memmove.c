/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:58:52 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/27 00:09:26 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
This function copies a number of bytes from the src to the dst from one memory to another , 
but the difference is this function allows copying between objects that might overlap (takes care of overlapping) in a non destructive way
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*dest;
	size_t	i;

	source = (char *)src;
	dest = (char *)dst;
	if (dest == 0 && source == 0)
		return (NULL);
	i = 0;
	if (dest >= source) // Here i'm handling the overlap so if dest greater or equal the src so there's a overlaping so to resolve this let's copy backward 
		while (len-- > 0)
		dest[len] = source[len];
	else
	{
		while (i < len) // the normal case if the given len less than the lenght of the src let's copy like ft_memcpy does 
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}

/*
#include <string.h>
int	main()
{
	int i = 0;
	int arr[5] = {1, 2, 3, 4, 5};
	ft_memset(arr,9,sizeof(int)*5);
	while (i < 5)
	{
		printf("%d\n",(char)arr[i]);
		i++;
	}
	return (0);
}
*/
