/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:07:29 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/25 16:15:48 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*p;
	int					i;
	unsigned char		m;

	p = (const unsigned char *)s;
	m = (unsigned char)c;
	i = 0;
	while (p[i])
	{
		if (p[i] == m)
			return ((char *)&p[i]);
		i++;
	}
	if (m == '\0')
		return ((char *)&(p[i]));
	return (NULL);
}
/*
 #include <stdio.h>

 int	main(void)
 {
		char	*str;
		int		c;
		char	*res;

		str = "abdellaziz";
		c = 105;
		res = ft_strchr(str, c);
		printf("%s", res);
		return (0);
 }*/
