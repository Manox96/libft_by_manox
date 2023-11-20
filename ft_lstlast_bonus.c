/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:53:31 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/20 09:30:59 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmplst;

	if (!lst)
		return (NULL);
	tmplst = lst;
	while (tmplst->next != NULL)
	{
		tmplst = tmplst->next;
	}
	return (tmplst);
}
