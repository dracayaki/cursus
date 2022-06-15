/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:10:42 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/13 12:57:21 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_atoi(const char *str);
int					ft_strncmp(const char *s1, const char *s2, unsigned long n);
int					ft_memcmp(const void *s1, const void *s2, unsigned long n);
unsigned long		ft_strlen(const char *str);
unsigned long		ft_strlcat(char *dest, const char *src, unsigned long size);
unsigned long		ft_strlcpy(char *dest, const char *src, unsigned long size);
char				*ft_itoa(int n);
char				*ft_strdup(const char *s1);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				**ft_split(char const *s, char c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strnstr(const char *s2, const char *s1,
						unsigned long len);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_bzero(void *s, unsigned long n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memset(void *b, int c, unsigned long len);
void				*ft_memchr(const void *s, int c, unsigned long n);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				*ft_memcpy(void *dest, const void *src, unsigned long n);
void				*ft_memmove(void *dst, const void *src, unsigned long len);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstnew(void *content);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
int					ft_lstsize(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));

#endif