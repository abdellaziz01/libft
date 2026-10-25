/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:41 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/24 13:45:03 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
	new->next = NULL;
}

/*
#include <stdio.h>

int	main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	t_list *head = ft_lstnew(&a);
	t_list *node1 = ft_lstnew(&b);
	head -> next = node1;
	node1 = ft_lstnew(&c);
	head -> next -> next = node1;
	ft_lstadd_back(&head , ft_lstnew(&d));
	while(head)
	{
		printf("%d\n",*(int *)head -> content);
		head = head -> next;
	}


}*/
