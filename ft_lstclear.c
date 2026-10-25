/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:12:00 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/25 16:14:48 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*(lst) = temp;
	}
	*lst = NULL;
}

/*
void	del(void * content)
{
	free(content);
}
#include <stdio.h>

int	main(void)
{
	int		*nb;
	t_list	*node1;
	int		*nb1;
	t_list	*node2;
	int		*nb2;
	t_list	*node3;

	nb = malloc (sizeof(int));
	*nb = 1;
	node1 = ft_lstnew(nb);
		nb1 = malloc (sizeof(int));
		*nb1 = 2;
	node2 = ft_lstnew(nb1);
		nb2 = malloc (sizeof(int));
		*nb2 = 3;
	node3 = ft_lstnew(nb2);
	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = NULL;
	ft_lstclear(&node1 , &del);
	//printf("nb = %d\n",*(int *)node1 -> content); // segmentation fault
}
*/
