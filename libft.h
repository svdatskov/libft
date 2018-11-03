/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hdr.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:35:16 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/30 21:16:23 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	*ft_memset(void *memptr, int val, size_t num);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *destptr, const void *srcptr, size_t num);
void	*ft_memccpy (void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strlen(const char *str);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *destptr, const char *srcptr);
char	*ft_strncpy(char *destptr, const char *srcptr, size_t num);
void	ft_putchar(char c);
int		ft_toupper(int character);
int		ft_tolower(int character);
char	*ft_strcat(char *destptr, const char *srcptr);
char	*ft_strncat(char *destptr, const char *srcptr, size_t num);
char	*ft_strstr(char *str, char *to_find);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_atoi(const char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t num);
char	*ft_strnstr(char *str, char *to_find, size_t len);
char	*ft_strchr(const char *string, int symbol);
char	*ft_strrchr(const char *string, int symbol);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_putstr(char const *s);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_itoa(int n);
#endif
