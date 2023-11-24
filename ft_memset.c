/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:20:03 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/24 19:30:50 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tob;

	tob = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*(tob + i) = (unsigned char)c;
		i++;
	}
	return (tob);
}
