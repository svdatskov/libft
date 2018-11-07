/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:37:38 by sdatskov          #+#    #+#             */
/*   Updated: 2018/11/04 15:37:40 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if(s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	printf("%i", count);
	return (0);
}

int main(void)
{
	ft_strsplit("*Hello*World*mine**serios", '*');
	return (0);
}