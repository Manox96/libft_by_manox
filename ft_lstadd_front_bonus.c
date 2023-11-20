/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:49:23 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/20 09:30:35 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *newx)
{
	if (!lst && !newx)
		return ;
	newx->next = *lst;
	*lst = newx;
}
