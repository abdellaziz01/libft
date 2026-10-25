/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:07:35 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/23 14:45:04 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	*p;
	unsigned char		m;
	int					i;
	int					index;

	p = (const unsigned char *)s;
	m = (unsigned char)c;
	index = -1;
	i = 0;
	while (p[i])
	{
		if (p[i] == m)
			index = i;
		i++;
	}
	if (m == '\0')
		return ((char *)&p[i]);
	if (index == -1)
		return (NULL);
	return ((char *)&p[index]);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "abdellaziz";
	char *res = ft_strrchr(str, '\0');
	printf("%s",res);
	return (0);
}*/
