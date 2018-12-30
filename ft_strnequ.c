/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 17:43:58 by sdatskov          #+#    #+#             */
/*   Updated: 2018/11/03 17:44:00 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
    size_t	i;
    int		j;
    int		b;
    int     c;


    if (!s1 || !s2)
        return (0);
    i = 0;
    b = 0;
    c = 0;
    j = ft_strlen(s2);
    if ((int)n < j)
        c = 1;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n && (int)i <= j)
    {
        if (s1[i] == s2[i])
            b++;
        i++;
    }
    if (c == 1)
    {
        if (b == (int)n)
            return (1);
        else
            return (0);
    }
    else
    {
        if (b == j && (int)i == j)
            return (1);
        else
            return (0);
    }
}
