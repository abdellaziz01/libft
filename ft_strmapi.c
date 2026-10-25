/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 11:41:27 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/18 11:41:29 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*res;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(res + i) = f(i, s[i]);
		i++;
	}
	*(res + i) = '\0';
	return (res);
}
/*
char	f(unsigned int i , char c)
{
   if(i % 2 == 0)
		c = c + 32;
   return (c);
}
#include <stdio.h>

int	main(void)
{
   char	*s;
   char	*res;

   s = "abdellaziz";
   res = ft_strmapi(s, &f);
   printf("%s",res);
}
*/
