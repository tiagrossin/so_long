/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <sarosa-b@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:03:35 by sarosa-b          #+#    #+#             */
/*   Updated: 2025/02/08 13:22:13 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <fcntl.h> 
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>  // Para ft_printf
# include <stdio.h>   // Solo para pruebas manuales de main
#include <stdbool.h>  // Librería de booleanos

/**************************************
 *           Funciones de libft       *
 **************************************/
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *stdptr, int value, size_t nbytes);
void	ft_bzero(void *stdptr, size_t nbytes);
void	*ft_memcpy(void *dest, const void *src, size_t nbytes);
void	*ft_memmove(void *dest, const void *src, size_t nbytes);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/**************************************
 *       Funciones de get_next_line   *
 **************************************/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42  // Tamaño del buffer para GNL
# endif

char	*get_next_line(int fd);
char	*ft_strjoin_free(char *s1, char *s2);

/**************************************
 *       Funciones de ft_printf       *
 **************************************/
# define UPP_HEX_BASE "0123456789ABCDEF"
# define HEX_BASE "0123456789abcdef"

int		ft_printf(const char *format, ...);
int		ft_putchar_pf(char c, int *char_count);
int		ft_putstr_pf(char *str, int *char_count);
int		ft_putnbr_pf(int nbr, int *char_count);
int		ft_unsigned_int_pf(unsigned int u, int *char_count);
int		ft_pointer_pf(size_t ptr, int *char_count);
int		ft_hexadecimal_pf(unsigned int nbr, int *char_count, char x_type);

#endif
