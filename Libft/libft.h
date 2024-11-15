/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregada- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:58:47 by mregada-          #+#    #+#             */
/*   Updated: 2024/10/16 20:19:32 by mregada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t c);
void	*ft_calloc(size_t num, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *buffer, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t i);
void	*ft_memmove(void *dest, const void *origen, size_t len);
void	*ft_memset(void *s, int v, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int i, char c));
void	ft_striteri(char *s, void (*f)(unsigned int i, char *str));
int		ft_strncmp(const char *s1, const char *s2, size_t contador);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlcat(char *destino, const char *origen, size_t finals);
size_t	ft_strlcpy(char *destino, const char *origen, size_t sdest);
int		ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
#endif
