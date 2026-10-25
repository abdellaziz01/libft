/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:04:21 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/25 16:14:34 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_isdigit('9'));
	printf("%d\n",ft_isdigit('0'));
	printf("%d\n",ft_isdigit(48));
} */