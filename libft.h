/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:47:36 by emaillet          #+#    #+#             */
/*   Updated: 2025/04/17 16:08:03 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>
# include "custom/libftplus_define.h"

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	ft_strcat(char **dst_ptr, const char *src);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *lnew);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *lnew);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

long	ft_atol(const char *str);
size_t	ft_printf(const char *s, ...);
size_t	ft_printfd(int fd, const char *s, ...);
char	*get_next_line(int fd);
char	*ft_ltoa(long n);
int		ft_free_strtab(char **tab);
int		ft_isspace(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
char	**ft_strtabdup(char **tab);
char	**ft_strtabdup_lst(char **tab);
char	*ft_strdup_lst(const char *s);
char	*ft_substr_lst(char *s, unsigned int start, size_t len);
char	*ft_strjoin_lst(char const *s1, char const *s2);
char	*ft_strtrim_lst(char const *s1, char const *set);
char	**ft_split_lst(char const *s, char c);
char	*ft_ltoa_lst(long n);
t_list	*ft_lst_rotate(t_list **lst, size_t n);
t_list	*ft_lst_unrotate(t_list **lst, size_t n);
void	ft_lst_swap(t_list **a, t_list **b);
void	ft_lstprintfd(t_list *lst, int fd);
t_list	**ft_alist(void);
char	*ft_strmapi_lst(char const *s, char (*f)(unsigned int, char));
void	nufree(void *ptr);
void	ft_alist_free(void);
void	ft_lstremoveone(t_list **head, t_list *lst, void (*del)(void*));
void	ft_putlst_fd(t_list *lst, int fd);
void	ft_putlst_fd_prefix(t_list *lst, int fd, char *prefix);
char	**ft_lst_to_tab_str(t_list *lst);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_sort_str_tab(char **tab);
t_list	*ft_tab_to_lst_str(char **tab);
t_list	**ft_logslist(void);
void	ft_logs_free(void);
size_t	ft_logs_add(t_log_type id, char *msg);
void	ft_printlogs(t_log_type id);
void	ft_printlogs_fd(t_log_type id, int fd);
t_rgb	itorgb(unsigned char r, unsigned char g, unsigned char b);
char	*ft_ltoahex(long n);
char	*ft_ltoahex_lst(long n);
void	ft_alist_add_back(void *content);
void	ft_alist_add_front(void *content);
void	dumb(int x, ...);
char	*ft_strdupnull(const char *s);
char	*ft_strdupnull_lst(const char *s);

#endif
