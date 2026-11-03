/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:31:56 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/25 16:17:34 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	start_len(char const *s1, char const *set)
{
	size_t	i;
	size_t	count;
	size_t	j;

	count = 0;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count++;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (count);
}

static size_t	end_len(char const *s1, char const *set)
{
	int		i;
	size_t	count;
	int		j;

	count = 0;
	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count++;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
		i--;
	}
	return (count);
}

static char	*checkk(char const *s1, char const *set)
{
	char	*p;

	if (s1[0] == '\0')
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if (start_len(s1, set) >= ft_strlen(s1))
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	t;
	size_t	end;
	size_t	start;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	p = checkk(s1, set);
	if (p)
		return (p);
	t = ft_strlen(s1) - start_len(s1, set) - end_len(s1, set);
	p = malloc(t + 1);
	if (!p)
		return (NULL);
	end = ft_strlen(s1) - end_len(s1, set) - 1;
	start = start_len(s1, set);
	while (start <= end)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}
