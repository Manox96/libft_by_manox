/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:45:12 by aennaqad          #+#    #+#             */
/*   Updated: 2023/11/15 11:43:11 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnum(int n)
{
	int	c;

	c = 0;
	if (n == 0)
		c = 1;
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int			sizen;
	char		*ptr;
	int			t;
	long long	newn;

	t = 0;
	newn = n;
	if (newn < 0)
	{
		t = 1;
		newn = -newn;
	}
	sizen = countnum(n) + t;
	ptr = malloc(sizen * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	ptr[sizen] = '\0';
	if (t == 1)
		ptr[0] = '-';
	while (--sizen >= t)
	{
		ptr[sizen] = (newn % 10) + '0';
		newn = newn / 10;
	}
	return (ptr);
}
