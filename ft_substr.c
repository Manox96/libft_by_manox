/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:48:56 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/22 15:00:03 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mystr;
	size_t	i;
	size_t	newlen;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	newlen = ft_strlen(s + start);
	if (len > newlen)
		len = newlen;
	mystr = malloc((len + 1) * sizeof(char));
	if (!mystr)
		return (NULL);
	while (i < len)
	{
		mystr[i] = s[start + i];
		i++;
	}
	mystr[i] = '\0';
	return (mystr);
}
