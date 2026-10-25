/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <abdait-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:12:39 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/24 16:25:42 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*new;
	t_list	*res;

	if (!lst || !f)
		return (NULL);
	res = NULL;
	while (lst)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!content || !new)
		{
			if (content && !new && del)
				del(content);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}

/*
void	*f(void *content)
{
	int	*res;
	int	nb;

   res = malloc(sizeof(int));
   if(!res)
		return (NULL);
   nb = *(int *)content;
   *res = nb * 10;
   return (res);
}
void	del(void *content)
{
   free(content);
}

#include <stdio.h>

int	main(void)
{
	int		*a;
	int		*b;
	int		*c;
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*res;

   a = malloc(sizeof(int));
   *a = 100;
   b = malloc(sizeof(int));
   *b = 200;
   c = malloc(sizeof(int));
   *c = 300;
   head = ft_lstnew( a);
   node1 = ft_lstnew( b);
   node2 = ft_lstnew( c);
   head -> next = node1;
   node1 -> next = node2;
   node2 -> next = NULL;
   res = ft_lstmap(head, f , del);
   while(res)
   {
		printf("%d\n",*(int *)res ->content);
		res = res -> next;
   }
   ft_lstclear(&head , del);
   ft_lstclear(&res , del);
}
*/
