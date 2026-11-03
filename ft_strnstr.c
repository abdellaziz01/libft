/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:37:47 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/29 14:08:47 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*big1;
	const char	*little1;
	size_t		i;
	size_t		j;

	big1 = (const char *)big;
	little1 = (const char *)little;
	i = 0;
	if (little1[0] == '\0')
		return ((char *)big1);
	while (big1[i] && i < len)
	{
		j = 0;
		while (i + j < len && big1[i + j] && little1[j] && big1[i
				+ j] == little1[j])
			j++;
		if (little1[j] == '\0')
			return ((char *)&big1[i]);
		i++;
	}
	return (NULL);
}
