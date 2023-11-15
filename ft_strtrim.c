/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:13:44 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/15 11:44:31 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char *set, int c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

static char	*mynew(const char *mys1, size_t start, size_t len)
{
	char	*bfr;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(mys1) || len <= 0)
		return (ft_strdup(""));
	bfr = malloc(sizeof(char) * len + 1);
	if (!bfr)
		return (NULL);
	while (i < len)
	{
		bfr[i] = mys1[start + i];
		i++;
	}
	bfr[i] = '\0';
	return (bfr);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	lstr;
	size_t	rstr;
	size_t	u;

	u = 0;
	if (!s1)
		return (NULL);
	while (s1[u])
	{
		if (s1[u] == 32 || (s1[u] >= 9 && s1[u] <= 13))
			u++;
		else
			break ;
	}
	if (ft_strlen(s1) == 0 || ft_strlen(s1) == u)
		return (ft_strdup(""));
	rstr = ft_strlen(s1) - 1;
	lstr = 0;
	while (is_in_set(set, s1[lstr]))
		lstr++;
	while (is_in_set(set, s1[rstr]))
		rstr--;
	return (mynew(s1, lstr, (rstr - lstr) + 1));
}
