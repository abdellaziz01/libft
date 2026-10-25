/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:50 by abdait-o          #+#    #+#             */
/*   Updated: 2026/10/21 17:11:52 by abdait-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[3] = {'a', 'a'};
	t_list	*new;

	new = ft_lstnew(str);
	ft_lstadd_front(&new, ft_lstnew((char[]){'b', 'b'}));
	while (new)
	{
		printf("%s\n", (char*)new->content);
		new = new->next;
	}
}
*/
