/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:11:28 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/23 12:00:29 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p1;
	const char unsigned	*p2;
	size_t				i;

	p1 = (unsigned char *)dest;
	p2 = (const unsigned char *)src;
	i = 0;
	if (p1 < p2)
	{
		while (i < n)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	else
	{
		while (n > i)
		{
			n--;
			*(p1 + n) = *(p2 + n);
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char buffer[] = "abcdefg";

	printf("Before memmove: %s\n", buffer);

	ft_memmove(buffer + 1 , buffer, 5);

	printf("After memmove:  %s\n", buffer);

	return (0);
}*/
