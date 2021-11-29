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
	if (dest >= source)
		while (len-- > 0)
		dest[len] = source[len];
	else
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}

/*
int main ()

{
	int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	memmove(&arr[3], arr, 4*sizeof(int));
	ft_memmove(&arr[3], arr, 4*sizeof(int));
	for (int i = 0; i < 8;i++)
	{
		printf("%d\n", arr[i]);
	}
}

*/
