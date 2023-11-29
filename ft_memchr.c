/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:47:40 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/29 14:03:22 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tos;
	size_t			i;

	tos = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(tos + i) == (unsigned char)c)
			return ((void *)tos + i);
		i++ ;
	}
	return (NULL);
}
