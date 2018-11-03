/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:09:31 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/30 21:10:40 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    int num;
    int len;
    char *number;
    int j;

    num = n;
    len = 1;
    while (num > 9 || num < -9)
    {
        num /= 10;
        len++;
    }
    	number = (char *)malloc(sizeof(char) * len + ((n < 0) ? 2 : 1));
    len = n < 0 ? len + 1 : len;
      num = n;
      if (n < 0)
        n = -n;
    number[len] = '\0';
    while (--len >= 0)
    {
      if (len == 0 && num < 0)
      {
          number[len] = '-';
          break;   
      }
        j = n % 10;
        number[len] = j + 48;
        n = (n - j) / 10;
    }
    return (number);
}
