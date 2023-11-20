/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:48:49 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/20 09:30:27 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if ((*lst) == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		del(current);
		current = current->next;
		*lst = current;
	}
	free(*lst);
	*lst = NULL;
}
