/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:02:57 by druina            #+#    #+#             */
/*   Updated: 2022/12/22 14:43:09 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
/**
 * @brief  recieves a char and prints it on the fd output
 * @note   0 standart input, 1 standart ouput, 2 error
 * @param  c: char
 * @param  fd: the file descriptor
 * @retval None
 */
void				ft_putchar_fd(char c, int fd);
/**
 * @brief  checks if the variable is an alphabetic character
 * @note   uppercase & lower case
 * @param  c: int
 * @retval 1 if correct, 0 if not
 */
int					ft_isalpha(int c);
/**
 * @brief  checks if the variable is a digit between 0-9
 * @note   
 * @param  c: int
 * @retval 1 if correct, 0 if not
 */
int					ft_isdigit(int c);
/**
 * @brief  checks if the variable is a digit or an Alphabetic character
 * @note   digit, uppercase or lowercase
 * @param  c: int
 * @retval 1 if correct, 0 if not
 */
int					ft_isalnum(int c);
/**
 * @brief  checks if the variable is in the range of the decimal ascii table
 * @note   0-127
 * @param  c: int
 * @retval 1 if correct, 0 if not
 */
int					ft_isascii(int c);
/**
 * @brief  checks if the variable is printable as an output
 * @note   in decimal ascii table
 * @param  c: int
 * @retval 1 if correct, 0 if not
 */
int					ft_isprint(int c);
/**
 * @brief  takes a char string and returns the lenght of the string
 * @note   returns an int
 * @param  src: char pointer - string
 * @retval the lenght of the string. 0 if NULL
 */
int					ft_strlen(char *src);
/**
 * @brief  the functions fills n bytes of memory from the start of pointer b with the character c
 * @note   returns a void pointer, not a void function!
 * @param  b: void pointer
 * @param  c: int
 * @param  n: size_t
 * @retval returns pointer b
 */
void				*ft_memset(void *b, int c, size_t n);
/**
 * @brief  takes a character and if it's lowercase it returns it as an uppercase
 * @note   
 * @param  c: int
 * @retval if it's a lowercase character it return it as an uppercase else does nothing
 */
int					ft_toupper(int c);
/**
 * @brief  takes a character and if it's uppercase it returns it as a lowercase
 * @note   
 * @param  c: int
 * @retval if it's a uppercase character it return it as an lowercase else does nothing
 */
int					ft_tolower(int c);
/**
 * @brief  the functions erases the data in the n bytes of memory by chnaging them all to zero. starting where pointer s points to
 * @note  using ft_memset
 * @param  s: void pointer
 * @param  n: size_t
 * @retval None
 */
void				ft_bzero(void *s, size_t n);
/**
 * @brief  the functions copies n bytes from src to dest. The memory must not overlap.
 * @note   use ft_memmove if the memory areas overlap
 * @param  dest: void pointer
 * @param  src: void const pointer
 * @param  n: size_t
 * @retval pointer dest
 */
void				*ft_memcpy(void *dest, const void *src, size_t n);
/**
 * @brief  the function returns a pointer to the first occurrence of c in string s
 * @note   the '/0' terminator included, use ft_memchr if you want to use not on a string
 * @param  s: const char pointer - string
 * @param  c: int
 * @retval returns a pointer for the first occurence of c or NULL if not found
 */
char				*ft_strchr(const char *s, int c);
/**
 * @brief  the function returns a pointer to the last occurrence of c in string s
 * @note    the '/0' terminator included
 * @param  s: const char pointer -string
 * @param  c: int
 * @retval returns a pointer for the last occurence of c or NULL if not found
 */
char				*ft_strrchr(const char *s, int c);
/**
 * @brief  the function copies n bytes from memory src to memory dest. the areas may overlap.
 * @note   uses ft_memcpy
 * @param  dest: void pointer
 * @param  src: const void pointer
 * @param  n: size_t
 * @retval pointer dest 
 */
void				*ft_memmove(void *dest, const void *src, size_t n);
/**
 * @brief  the function compares n characters from string s1 and string s2
 * @note   the first character that is not equal
 * @param  s1: const char pointer - string
 * @param  s2: const char pointer - string
 * @param  n: size_t
 * @retval 0 if they're equal, negative value if s1 is less than s2, positive value if s1 is greater than s2
 */
int					ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief  the function finds the first occurrence of c in n bytes range in pointer s
 * @note   use ft_strchr if you want to use on strings
 * @param  s: const void pointer
 * @param  c: int
 * @param  n: size_t
 * @retval return a pointer to the matching byte or NULL if not found
 */
void				*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief  the function compares the first n bytes of the memory areas s1 & s2
 * @note   if n is 0 the return is 0
 * @param  s1: const void pointer
 * @param  s2: const void pointer
 * @param  n: size_t
 * @retval 0 if they're equal, negative value if s1 is less than s2, positive value if s1 is greater than s2
 */
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t				ft_strlcat(char *dest, const char *src, size_t destsize);
int					ft_atoi(const char *str);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
char				*get_next_line(int fd);
char				*get_next_line_multiple(int fd);
void				ft_putchar(char c);
int					ft_putstr(char *str);
int					ft_putnbr(int nb);
long				ft_nbrlen(long nb);
int					ft_putnbr_unsigned(unsigned int nb);
char				*ft_nbrtohex(unsigned long long nb, char x);
#endif
