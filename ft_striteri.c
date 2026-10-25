/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:38:57 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/18 13:39:00 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	f(unsigned int i , char *c)
{
	if(*c >= 'a' && *c <= 'z')
		*c = *c + i;
}
#include <stdio.h>

int	main(void)
{
	char	s[20] = "abdellaziz";

	ft_striteri(s,&f);
	printf("%s",s);
}
*/
