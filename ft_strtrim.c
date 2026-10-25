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

/*int	main(void)
{
   int		start1;
   int		end1;
   char	*res1;
   int		start2;
   int		end2;
   char	*res2;
   int		start3;
   int		end3;
   char	*res3;
   int		start4;
   int		end4;
   char	*res4;
   int		start5;
   int		end5;
   char	*res5;
   int		start6;
   int		end6;
   char	*res6;
   int		start7;
   int		end7;
   char	*res7;
   int		start8;
   int		end8;
   char	*res8;
   int		start9;
   int		end9;
   char	*res9;
   int		start10;
   int		end10;
   char	*res10;

   // Test 1
   start1 = start_len("ababhelloabab", "ab");
   end1 = end_len("ababhelloabab", "ab");
   res1 = ft_strtrim("ababhelloabab", "ab");
   printf("--- Test 1 ---\n");
   printf("start :%d\n", start1);
   printf("end :%d\n", end1);
   printf("res :%s\n\n", res1);
   free(res1);
   // Test 2
   start2 = start_len("   hello   ", " ");
   end2 = end_len("   hello   ", " ");
   res2 = ft_strtrim("   hello   ", " ");
   printf("--- Test 2 ---\n");
   printf("start :%d\n", start2);
   printf("end :%d\n", end2);
   printf("res :%s\n\n", res2);
   free(res2);
   // Test 3
   start3 = start_len("abcxyzabc", "abc");
   end3 = end_len("abcxyzabc", "abc");
   res3 = ft_strtrim("abcxyzabc", "abc");
   printf("--- Test 3 ---\n");
   printf("start :%d\n", start3);
   printf("end :%d\n", end3);
   printf("res :%s\n\n", res3);
   free(res3);
   // Test 4
   start4 = start_len("hello", "xyz");
   end4 = end_len("hello", "xyz");
   res4 = ft_strtrim("hello", "xyz");
   printf("--- Test 4 ---\n");
   printf("start :%d\n", start4);
   printf("end :%d\n", end4);
   printf("res :%s\n\n", res4);
   free(res4);
   // Test 5
   start5 = start_len("aaaaaa", "a");
   end5 = end_len("aaaaaa", "a");
   res5 = ft_strtrim("aaaaaa", "a");
   printf("--- Test 5 ---\n");
   printf("start :%d\n", start5);
   printf("end :%d\n", end5);
   printf("res :%s\n\n", res5);
   free(res5);
   // Test 6
   start6 = start_len("", "a");
   end6 = end_len("", "a");
   res6 = ft_strtrim("", "a");
   printf("--- Test 6 ---\n");
   printf("start :%d\n", start6);
   printf("end :%d\n", end6);
   printf("res :%s\n\n", res6);
   free(res6);
   // Test 7
   start7 = start_len("hello", "");
   end7 = end_len("hello", "");
   res7 = ft_strtrim("hello", "");
   printf("--- Test 7 ---\n");
   printf("start :%d\n", start7);
   printf("end :%d\n", end7);
   printf("res :%s\n\n", res7);
   free(res7);
   // Test 8
   start8 = start_len("xxhelloxx", "x");
   end8 = end_len("xxhelloxx", "x");
   res8 = ft_strtrim("xxhelloxx", "x");
   printf("--- Test 8 ---\n");
   printf("start :%d\n", start8);
   printf("end :%d\n", end8);
   printf("res :%s\n\n", res8);
   free(res8);
   // Test 9
   start9 = start_len("  a b c  ", " ");
   end9 = end_len("  a b c  ", " ");
   res9 = ft_strtrim("  a b c  ", " ");
   printf("--- Test 9 ---\n");
   printf("start :%d\n", start9);
   printf("end :%d\n", end9);
   printf("res :%s\n\n", res9);
   free(res9);
   // Test 10
   start10 = start_len("xyzhelloxyz", "xyz");
   end10 = end_len("xyzhelloxyz", "xyz");
   res10 = ft_strtrim("xyzhelloxyz", "xyz");
   printf("--- Test 10 ---\n");
   printf("start :%d\n", start10);
   printf("end :%d\n", end10);
   printf("res :%s\n\n", res10);
   free(res10);
   return (0);
}

*/