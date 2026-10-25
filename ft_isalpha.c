/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 12:30:28 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/24 15:10:54 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/*

#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_isalpha(353));
	printf("%d\n",ft_isalpha(97));
	printf("%d\n",ft_isalpha('k'));
	printf("%d\n",ft_isalpha(0));
	return (0);
} */
