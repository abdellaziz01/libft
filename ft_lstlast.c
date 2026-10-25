/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:12:32 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/21 17:12:33 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	int		c;
	int		d;
	t_list	*head;
	t_list	*header;
	t_list	*header1;
	t_list	*header2;
	t_list	*header3;

	a = 1;
	b = 2;
	c = 3;
	d = 4;
	head = NULL;
	header = ft_lstnew(&a);
	header1 = ft_lstnew(&b);
	header2 = ft_lstnew(&c);
	header3 = ft_lstnew(&d);
	head = header;
	header -> next = header1;
	header1 -> next = header2;
	header2 -> next =header3;
	header3 -> next = NULL;
	t_list * res = ft_lstlast(head);
	printf("%d",*(int *) res -> content);
}
*/
