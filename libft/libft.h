/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:50:23 by stagma            #+#    #+#             */
/*   Updated: 2025/10/18 14:40:46 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h> //This is the library used by size_t
# include <stdlib.h>
# include <unistd.h>
//Functions that needs no external functions
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size);
//Copy src in dest if allowed
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);
//Concatenation if allowed
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c); //First occurrence of c
char	*ft_strrchr(const char *s, int c); //Last occurrence of c
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
//Points to the first occurrence of c
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
//Functions that uses previous functions and no externals...
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
//Functions that uses malloc();
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
//Functions that uses other previous functions and malloc and free...
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//Some of the previous functions are useful and write...
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
//You think you're done... Bonus is next!

#endif