/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:26:29 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/13 12:27:07 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	m;
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	m = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = m;
		i++;
	}
	return (s);
}

/*#include <stdio.h>

 int main()
{
	unsigned char	s[10] = "abdellaziz";
		int s[10] = {0,1,2,3,4,5,6,7,8,9};
	int				i;

		ft_memset(s, 6000 , 4);
	printf("%s",s);
}*/
/*
#include <stdio.h>
 int main()
{
	ft_memset(s,6,4*sizeof(int));
	i = 0;
	while(i < 10)
	{
		printf("%d\n",s[i]);
		i++;
	}
}
*/
