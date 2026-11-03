/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:37:17 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/25 16:15:20 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;
	unsigned char		m;

	p = (const unsigned char *)s;
	m = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == m)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
