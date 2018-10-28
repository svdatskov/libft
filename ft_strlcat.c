/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:44:51 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/28 17:44:53 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t len;
	size_t size;
	char *d;
	const char *s;

	d = dst;
	s = src;
	size = dstsize;
	while (size > 0 && *d)
	{
		d++;
		size--;
	}
	len = d - dst;
	size = dstsize - len;
	if (size == 0)
		return (len + ft_strlen(s));
	while (*s)
	{
		if (size > 1) 
		{
			*d = *s;
			size--;
			d++;
		}
		s++;
	}
	*d = '\0';
	return (len + (s - src));
}
