/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hdr.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:35:16 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/25 16:22:25 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	*ft_memset(void *memptr, int val, size_t num);
void 	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *destptr, const void *srcptr, size_t num);
void    *ft_memccpy (void *dst, const void *src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_strlen(char *str);
char    *ft_strdup(char *src);
char    *ft_strcpy( char *destptr, const char *srcptr);
char    *ft_strncpy(char *destptr, const char *srcptr, size_t num);
void    ft_putchar(char c);
int     ft_toupper(int character);
int     ft_tolower(int character);

#endif
