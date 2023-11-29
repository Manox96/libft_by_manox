/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:51:28 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/29 14:18:22 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tab;

	if (count * size > SIZE_MAX)
		return (NULL);
	tab = (void *)malloc(((count * size) * sizeof(char)));
	if (!tab)
		return (NULL);
	ft_bzero(tab, size * count);
	return (tab);
}
