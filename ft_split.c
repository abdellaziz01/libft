/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:07:06 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/25 16:15:45 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*fill(char const *s, int start, int end, int len)
{
	char	*res;
	int		i;

	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

static void	free_all(char **strs, int j)
{
	while (j >= 0)
		free(strs[j--]);
	free(strs);
}

static char	**return_strs(char **res, const char *s, char c)
{
	int	j;
	int	i;
	int	start;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		res[j] = fill(s, start, i - 1, i - start);
		if (!res[j])
		{
			free_all(res, j);
			return (NULL);
		}
		j++;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	return (return_strs(res, s, c));
}
