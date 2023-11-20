/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:22:58 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/20 09:31:11 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*tmplst;

	tmplst = lst;
	counter = 0;
	while (tmplst != NULL)
	{
		counter++;
		tmplst = tmplst->next;
	}
	return (counter);
}
