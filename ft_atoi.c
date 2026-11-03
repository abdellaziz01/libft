/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:38:35 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/29 09:48:46 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	buffer_return(int signe)
{
	if (signe == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *nptr)
{
	long	buffer;
	int		signe;
	int		i;
	long	res;

	i = 0;
	signe = 1;
	res = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		buffer = res;
		res = res * 10 + (nptr[i] - '0');
		if (buffer > res)
			return (buffer_return(signe));
		i++;
	}
	return ((int)signe * res);
}
