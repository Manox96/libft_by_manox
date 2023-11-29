/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:31:21 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/29 00:18:00 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newa)
{
	t_list	*last;

	if (!lst)
		return ;
	last = *lst;
	if (last == NULL)
		*lst = newa;
	else
	{
		last = ft_lstlast(*lst);
		last->next = newa;
	}
}
