/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:30:55 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/29 09:51:43 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrs_len(long n, int signe)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 9)
	{
		count++;
		n = n / 10;
	}
	return (count + signe + 1);
}

static int	get_signe(long n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	int		signe;
	int		t;
	char	*p;
	long	temp;

	temp = n;
	signe = get_signe(temp);
	if (signe == 1)
		temp = -temp;
	t = nbrs_len(temp, signe);
	p = malloc(t + 1);
	if (!p)
		return (NULL);
	if (signe == 1)
		p[0] = '-';
	p[t] = '\0';
	t = t - 1;
	while (t >= signe)
	{
		p[t] = (temp % 10) + '0';
		temp = temp / 10;
		t--;
	}
	return (p);
}
