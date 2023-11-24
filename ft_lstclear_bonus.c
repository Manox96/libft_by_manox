/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:48:49 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/24 22:17:09 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextnode;

	if (!lst || !del)
		return ;
	nextnode = *lst;
	while (nextnode != NULL)
	{
		nextnode = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = nextnode;
	}
	*lst = NULL;
}
