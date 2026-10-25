/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:34:24 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/25 16:14:21 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > SIZE_MAX / nmemb)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

/*
#include <stdio.h>

int	main(void)
{
	size_t	huge;
	void	*overflow_ptr;

	huge = SIZE_MAX;
	overflow_ptr = ft_calloc(huge, huge);
	if (overflow_ptr == NULL)
	{
		printf("Overflow detected successfully! Returned NULL as expected.\n");
	}
	else
	{
		printf("Overflow NOT detected (Something is wrong).\n");
		free(overflow_ptr);
	}
	return (0);
}
*/
