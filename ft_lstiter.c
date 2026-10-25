/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:12:23 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/21 17:12:25 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst->next != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
	f(lst->content);
}

/*
#include <stdio.h>

void	f(void *content)
{
	printf("%d\n",*(int *)content);
}
int	main(void)
{
	int		a;
	int		b;
	int		c;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	a = 1;
	b = 2;
	c = 3;
	node1 = ft_lstnew(&a);
	node2 = ft_lstnew(&b);
	node3 = ft_lstnew(&c);
	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = NULL;
	ft_lstiter(node1, &f);
}
*/
