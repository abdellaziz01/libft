/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:10:02 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/25 16:14:18 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int res[10] = {0,1,2,3,4,5,6,7,8,9};
	ft_bzero(res,5*sizeof(int));
	int i;
	i = 0;
	while(i < 10)
		{
			printf("%d",res[i]);
			i++;
		}

}*/
