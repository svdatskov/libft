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

int	ft_atoi(const char *s)
{
	long res;
	int minus;

	res = 0;
	minus = 0;
	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;
	if (*s == '-')
	{
		s++;
		minus++;
	}
	if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res *= 10;
		res += *s - 48;
		s++;
	}
	if (minus == 1)
		res *= -1;
	if (res > 2147483648)
		return (-1);
	if (res < -2147483649)
		return (0);
	return (res);
}

int main(void)
{
	char n[40] = "-99999999999999999999999";
	printf("%i\n", atoi(n));
	printf("%i\n", ft_atoi(n));
	return(0);
}
