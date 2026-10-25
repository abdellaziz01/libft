/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:13:06 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/24 10:46:30 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
#include <stdio.h>

int	main(void)
{
	int		a;
	t_list	*header;
	t_list	*node1;

	a = 1;
	header = NULL;
	header = malloc(sizeof(t_list));
	header -> content = &a;
	header -> next = NULL;
	printf("%d\n",*(int *)header -> content);
	printf("%p\n",header -> next);
	a = 2;
	node1 = NULL;
	node1 = malloc(sizeof(t_list));
	printf("%p\n", node1);
	node1 -> content = &a;
	node1 -> next = NULL;
	header -> next = node1;
	printf("%p\n",header -> next);
	printf("%d\n",*(int *)node1 -> content);
	printf("%p\n",node1 -> next);
	a = 3;
	node1 = malloc(sizeof(t_list));
	node1 -> content = &a;
	node1 -> next = NULL;
	header -> next -> next = node1;
	printf("%p\n",header -> next -> next);
	printf("%d\n",*(int *)node1 -> content);
	printf("%p\n",node1 -> next);
	printf("%d\n", ft_lstsize(header));
}
*/
