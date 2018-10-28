/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:59:36 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/28 15:59:38 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	char *arr;

	arr = (char *)memptr;
	while (num > 0)
	{
		arr[num - 1] = val;
		num--;
	}
	return (memptr);
}
