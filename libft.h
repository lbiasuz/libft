/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:21:34 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/30 14:53:43 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
// Memory manipulation
/* 
*Set bytes after defined memory address to zero;
*@param s Memory address
*@param n Number of bytes
*/
void	ft_bzero(void *s, size_t n);
/* 
*Set bytes after defined memory address to desired value;
*@param s Memory address
*@param c Desired value
*@param n Number of bytes
*@return Returns the same passed memory address
*/
void	*ft_memset(void *s, char c, size_t n);
/*
*Returns the first memory address that matches desired value;
*@param s Memory address
*@param c Desired value
*@param n Max number of bytes to verify
*@return Match memory address or NULL
*/
void	*ft_memchr(const void *s, int c, size_t n);
/*
*Copies content from one address to another.
*Will cause SEGFAULT if memory delimitations are not met.
*@param dest Memory address to copy content to.
*@param src Memory address to copy content from.
*@param n Number of bytes to copy from src to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/*
*Move memory from one address to another without overriding content from src.
*Will cause SEGFAULT if memory delimitation are not met.
*@param dest Memory address to move content to.
*@param src Memory address to move content from.
*@param n Number of bytes to move.
*/
void	*ft_memmove(void *dest, const void *src, size_t n);
/*
*Compares two addresses of memory;
*@param s1 First memory address.
*@param s2 Second memory address.
*@param n Number of bytes to compare.
*@return Return the distance between the first diferent bytes.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
//	Number convertion
int		ft_abs(int n);
long	ft_absl(long n);
char	*ft_itoa(int n);
int		ft_atoi(const char *nptr);
// String manipulation

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char const *s, char c);
// Write value

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
// Linked list

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **list, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif