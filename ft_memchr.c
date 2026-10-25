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

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*res;

// 	str = "abdellaziz";
// 	res = ft_memchr(str,  'z' , 10);
// 	printf("%s",res);
// 	return (0);

// 	int	str[] = {0,1,2,3,40000,5};
// 	int *arr = ft_memchr(str , 40000 , 6 * sizeof(int));

// 	int i = 0;
// 	while(i < 2)
// 	{
// 		printf("%d\n",arr[i]);
// 		i++;
// 	}
// 	return (0);
// }
