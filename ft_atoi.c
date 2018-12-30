/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 18:52:42 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/24 16:22:04 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	check(int res, const char *s, int minus)
{
	if (res == 922337203685477580 && *s > '7' && minus == 0)
		return (-1);
	else if (res > 922337203685477580 && *s > 7 && minus == 0)
		return (-1);
	else if (res == 922337203685477580 && *s > '8' && minus == 1)
		return (0);
	else if (res > 922337203685477580 && *s > 7 && minus == 1)
		return (0);
	return (1);
}

int			ft_atoi(const char *s)
{
	long	res;
	int		minus;

	res = 0;
	minus = 0;
	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			minus++;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res *= 10;
		res += *s++ - 48;
		if (check(res, s, minus) == 0)
			return (0);
		else if (check(res, s, minus) == -1)
			return (-1);
	}
	// while (*s >= '0' && *s <= '9')
	// {
	// 	res = res * 10 + *s - '0';
	// 	s++;
	// 	if (check(res, s, minus) == 0)
	// 		return (0);
	// 	else if (check(res, s, minus) == -1)
	// 		return (-1);
	// }
	if (minus == 1)
		res *= -1;
	return (res);
}

int main(void)
{
	printf("%i\n", ft_atoi("100000000000000000000"));
	printf("%i\n", atoi("10000000000000000000"));
	return (0);
}
