/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:34:21 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/23 11:34:30 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;

	i = 0;
	d = ft_strlen(src);
	if (!dstsize)
		return (d);
	while (src[i] && i < dstsize - 1)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	dst[i] = '\0';
	return (d);
}
