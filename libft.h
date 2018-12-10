/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:45:03 by wzei              #+#    #+#             */
/*   Updated: 2018/12/07 11:47:42 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isacsii(int c);
int		ft_isdigit(int c);
int		isprint(int c);
void	*ft_memalloc(size_t size);
void	*memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, const char *src);
void	 ft_strdel(char **as);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strlen(char *str);
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strrchar(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif