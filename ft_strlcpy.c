/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:10:40 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/25 16:16:41 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

/*
 #include <stdio.h>
int	main(void)
{
	char dst[10];
	char src[20] = "abcdefggggghahah";

	size_t y = ft_strlcpy(dst , src , sizeof(dst));
	printf("%zu\n",y);
	printf("%s\n",dst);
} */
