/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:04:20 by aennaqad          #+#    #+#             */
/*   Updated: 2023/12/01 15:23:25 by aennaqad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	hand(int s)
{
	if (s == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			s;
	long long	r;

	r = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (r > 922337203685477580
			|| (r == 922337203685477580 && str[i] - '0' > 7))
			return (hand(s));
		r = r * 10 + str[i] - '0';
		i++;
	}
	return (s * r);
}
