/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:11:28 by abdait-o          #+#    #+#             */
/*   Updated: 2026/11/01 11:04:26 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (unsigned char *)dest;
	p2 = (const unsigned char *)src;
	i = 0;
	if (p1 == p2 || n == 0)
		return (dest);
	if (p1 < p2)
	{
		while (n--)
			*p1++ = *p2++;
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
