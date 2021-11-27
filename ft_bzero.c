/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:47:03 by otoufah           #+#    #+#             */
/*   Updated: 2021/11/10 13:18:31 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
Actually this function is similar to memset 
as u can see from the name it fills n bytes with the NULL == 0
*/

void	ft_bzero(void *s, size_t n)
{
	char	*memory
	size_t	i;

	i = 0;
	memory = (char *)s;
	while (i < n)
	{
		memory [i] = 0;
		i++;
	}
}
