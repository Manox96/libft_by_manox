/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:57:15 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/23 11:01:22 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newl;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	newl = NULL;
	while (lst)
	{
		node = ft_lstnew(NULL);
		if (!node)
		{
			ft_lstclear(&newl, del);
			return (NULL);
		}
		node -> content = f(lst->content);
		ft_lstadd_back(&newl, node);
		lst = lst->next;
	}
	return (newl);
}
