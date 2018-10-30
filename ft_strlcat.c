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

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t		len;
	size_t		sz;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	sz = size;
	while (sz-- > 0 && *d)
		d++;
	len = d - dst;
	sz = size - len;
	if (sz == 0)
		return (len + ft_strlen(s));
	while (*s)
	{
		if (sz-- > 1)
		{
			*d = *s;
			d++;
		}
		s++;
	}
	*d = '\0';
	return (len + (s - src));
}
