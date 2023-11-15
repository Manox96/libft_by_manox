/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:32:05 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/06 08:40:05 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tos1;
	unsigned char	*tos2;

	tos1 = (unsigned char *)s1;
	tos2 = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while (i < n - 1)
	{
		if (*(tos1 + i) == *(tos2 + i))
			i++;
		else
			break ;
	}
	return (*(tos1 + i) - *(tos2 + i));
}
