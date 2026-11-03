/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:48:28 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/25 16:17:38 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check(unsigned int start, size_t len_s)
{
	char	*p;

	if (start >= len_s)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		*(p + 0) = '\0';
		return (p);
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	t;
	size_t	len_s;
	char	*p;
	size_t	i;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	p = check(start, len_s);
	if (p)
		return (p);
	if (len > len_s - start)
		t = len_s - start;
	else
		t = len;
	p = malloc(t + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < t)
		p[i++] = s[start++];
	*(p + i) = '\0';
	return (p);
}
