/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:28:11 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/18 13:28:12 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
   int	fd;

   fd = open("test1.txt",O_WRONLY);
   printf("%d\n",fd);
   ft_putchar_fd('A',fd);
   return (0);
}

*/
