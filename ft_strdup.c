/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:22:04 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/06 09:02:52 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*arr;

	arr = (char *)malloc(ft_strlen(s1) + 1 * sizeof(char));
	i = 0;
	if (!arr)
		return (NULL);
	while (s1[i] != '\0')
	{
		*(arr + i) = s1[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
