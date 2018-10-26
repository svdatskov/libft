/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:24:42 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/24 16:24:47 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
 unsigned char *d;
 unsigned char *s;

 d = (unsigned char *)dst;
 s = (unsigned char *)src;
 if (s < d)
 {
  while (len)
  {
   d[len - 1] = s[len - 1];
   len--;
  }
 }
 else if (s > d)
  d = ft_memcpy(d, s, len);
 return (d);
}
