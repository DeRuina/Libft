/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:02:57 by druina            #+#    #+#             */
/*   Updated: 2023/01/23 10:20:40 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
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
* @brief  the functions fills n bytes of memory from the
start of pointer b with the character c
 * @note   returns a void pointer, not a void function!
 * @param  b: void pointer
 * @param  c: int
 * @param  n: size_t
 * @retval returns pointer b
 */
void				*ft_memset(void *b, int c, size_t n);
/**
 * @brief  takes a character and if it's
lowercase it returns it as an uppercase
 * @note
 * @param  c: int
* @retval if it's a lowercase character it
return it as an uppercase else does nothing
 */
int					ft_toupper(int c);
/**
 * @brief  takes a character and if it's uppercase
 it returns it as a lowercase
 * @note
 * @param  c: int
* @retval if it's a uppercase character it
return it as an lowercase else does nothing
 */
int					ft_tolower(int c);
/**
* @brief  the functions erases the data in the n bytes of
memory by chnaging them all to zero. starting where pointer s points to
 * @note  using ft_memset
 * @param  s: void pointer
 * @param  n: size_t
 * @retval None
 */
void				ft_bzero(void *s, size_t n);
/**
* @brief  the functions copies n bytes from src to dest.
The memory must not overlap.
 * @note   use ft_memmove if the memory areas overlap
 * @param  dest: void pointer
 * @param  src: void const pointer
 * @param  n: size_t
 * @retval pointer dest
 */
void				*ft_memcpy(void *dest, const void *src, size_t n);
/**
* @brief  the function returns a pointer to the
first occurrence of c in string s
 * @note the '/0' terminator included,
use ft_memchr if you want to use not on a string
 * @param  s: const char pointer - string
 * @param  c: int
 * @retval returns a pointer for the first
 occurence of c or NULL if not found
 */
char				*ft_strchr(const char *s, int c);
/**
* @brief  the function returns a pointer to the last occurrence of c in string s
 * @note  uses ft_strlen, the '/0' terminator included
 * @param  s: const char pointer -string
 * @param  c: int
 * @retval returns a pointer for the last occurence of c or NULL if not found
 */
char				*ft_strrchr(const char *s, int c);
/**
* @brief  the function copies n bytes from memory
src to memory dest. the areas may overlap.
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
 * @retval 0 if they're equal, negative value if s1 is less than s2,
 positive value if s1 is greater than s2
 */
int					ft_strncmp(const char *s1, const char *s2, size_t n);
/**
* @brief  the function finds the first occurrence
of c in n bytes range in pointer s
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
 * @retval 0 if they're equal, negative value if s1 is less than s2,
positive value if s1 is greater than s2
 */
int					ft_memcmp(const void *s1, const void *s2, size_t n);
/**
* @brief  the function locates the first occurrence of string
needle in string haystack by n characters from the beginning of haystack
 * @note
 * @param  haystack: const char pointer - string
 * @param  needle: const char pointer - string
 * @param  n: size_t
 * @retval if needle is NULL haystack is returned,
if needle does not accure in haystack NULL is returned,
otherwise a pointer to the first occurence of needle is returned
 */
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t n);
/**
 * @brief the function copies size -1 from src to dest,
null terminmating the result
 * @note uses ft_strlen
 * @param  dest: char pointer - string
 * @param  src: const char pointer - string
 * @param  destsize: size_t
 * @retval the lenght of src
 */
size_t				ft_strlcpy(char *dest, const char *src, size_t destsize);
/**
 * @brief  the function appends src to the end of dest,
it will append as much bytes as there is space to
meaning if there is more space in dest.
 * @note  uses ft_strlen,
no matter how many bytes are copied dest will alwys be null terminated
 * @param  dest: char pointer - string
 * @param  src: const char pointer - string
 * @param  destsize: size_t
 * @retval lenght of dest + lenght of src
 */
size_t				ft_strlcat(char *dest, const char *src, size_t destsize);
/**
 * @brief  takes a string and returns it as a number
 * @note  unsigned long limits
 * @param  str: const char pointer - tring
 * @retval the string as a int, NULL if any garbage lettes beforehand
 */
int					ft_atoi(const char *str);
/**
 * @brief  allocate dynamic memory and fill it with 0's
 * @note uses ft_bzero
 * @param  count: size_t
 * @param  size: size_t
 * @retval returns a pointer for the allocated memory
 */
void				*ft_calloc(size_t count, size_t size);
/**
 * @brief  the function takes a string and alloctaes memory to it using malloc
 * @note uses ft_strlcpy, ft_strlen
 * @param  s1: const char pointer - string
 * @retval returns a pointer to the new allocated string
 */
char				*ft_strdup(const char *s1);
/**
* @brief  the function creates a sub string from string s.
the substring will start from s[start] and will be len long
 * @note uses ft_strlen
 * @param  s: char const pointer - string
 * @param  start: unsigned int
 * @param  len: size_t
 * @retval the pointer to the substring
 */
char				*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @brief  the function takes two strings and joins them together to one
 * @note uses ft_strlen
 * @param  s1: char const pointer - string
 * @param  s2: char const pointer - string
 * @retval the pointer to the joined string
 */
char				*ft_strjoin(char const *s1, char const *s2);
/**
* @brief  the function trims string set from the begeinning
and the end of string s1 if no set the return is NULL
 * @note uses ft_strlen, ft_strdup, ft_strchr ft_strrchr and ft_substr
 * @param  s1: char const pointer - string
 * @param  set: char const pointer - string
 * @retval the pointer to the trimmed string
 */
char				*ft_strtrim(char const *s1, char const *set);
/**
* @brief the function splits string s by every occurences of c.
it returns splited strings in an array of strings
 * @note uses ft_strlen, ft_strchr, ft_substr,
 * @param  s: char const pointer - string
 * @param  c: char
 * @retval the pointer to the array of strings. double pointer array
 */
char				**ft_split(char const *s, char c);
/**
 * @brief  the function takes a number and returns it as a string
 * @note uses ft_strlen
 * @param  n: int
 * @retval the pointer to the string
 */
char				*ft_itoa(int n);
/**
* @brief Applies the function f to each character of the string s
to create a new stringresulting from successive applications of f.
 * @note uses ft_strlen
 * @param  s: char const pointer -string
 * @param  f: (*f)(unsigned int, char *) - (function name)(index, char)
 * @retval the pointer to the new fanctioned string
 */
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * @brief Applies the function f to each character of the string s
 * @note
 * @param  s: char const pointer -string
 * @param  f: (*f)(unsigned int, char *) - (function name)(index, string)
 * @retval None
 */
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
/**
 * @brief  recieves a string and outputs it on the file descriptor
 * @note  0 standart input, 1 standart ouput, 2 error
 * @param  s: char pointer - string
 * @param  fd: file descriptor
 * @retval None
 */
void				ft_putstr_fd(char *s, int fd);
/**
* @brief recieves a string and outputs it on the file
descriptor with a new line
 * @note  0 standart input, 1 standart ouput, 2 error
 * @param   s: char pointer - string
 * @param  fd: file descriptor
 * @retval None
 */
void				ft_putendl_fd(char *s, int fd);
/**
 * @brief  recieves a number and outputs it on the file descriptor
 * @note  0 standart input, 1 standart ouput, 2 error
 * @param  n: int
 * @param  fd: file descriptor
 * @retval None
 */
void				ft_putnbr_fd(int n, int fd);
/**
* @brief  the function creates a new node and sets its content
to the inserted content and next to NULL
 * @note uses structs
 * @param  content: void pointer
 * @retval returns a t_list pointer of the new list (node)
 */
t_list				*ft_lstnew(void *content);
/**
 * @brief  adds a new node to the beginning of the list and makes it it's head.
 * @note if the list is empthy the new node will be the head
 * @param  lst: the head of the list, type t_list
 * @param  new: the node, type t_list
 * @retval None
 */
void				ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @brief  the function counts the lenght of the list
 * @note
 * @param  lst: t_list pointer - the head
 * @retval the lenght of the list
 */
int					ft_lstsize(t_list *lst);
/**
 * @brief returns the last node of the list
 * @note if lst NULL it still returns lst
 * @param lst: t_list pointer - the head
 * @retval lst - the last node
 */
t_list				*ft_lstlast(t_list *lst);
/**
 * @brief adds a new node in the back of the list
 * @note if lst is NULL it does nothing
 * @param lst: the head of the list, type t_list
 * @param new: the node, type t_list
 * @retval none
 */
void				ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @brief Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node
 * @note if lst is empthy it does nothing
 * @param lst: the head of the list, type t_list
 * @param del: a function that deletes the node contect
 * @retval none
 */
void				ft_lstdelone(t_list *lst, void (*del)(void *));
/**
 * @brief deletes and frees the list using the del function
 * @note if lst or del is NULL it does nothing
 * @param lst: the head of the list, type t_list
 * @param del: a function that deletes the node contect
 * @retval none
 */
void				ft_lstclear(t_list **lst, void (*del)(void *));
/**
* @brief iterates the list and makes the function f on
every content of every node
 * @note if lst or f is NULL it does nothing
 * @param lst: the head of the list, type t_list
 * @param f: a function
 * @retval none
 */
void				ft_lstiter(t_list *lst, void (*f)(void *));
/**
* @brief iterates the list and makes the function f on every
content of every node returning a new list of the applied nodes.
 * @note The del function is used to
delete the content of a node if needed.
 * @param lst: the head of the list, type t_list
 * @param f: a function
 * @param del: a function that deletes the node contect
 * @retval the new list
 */
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
/**
 * @brief the function returns a line read from a file, /n (new line) included
 * @note uses ft_strlen, ft_strjoin & ft_strchr 0 standart input,
1 standart ouput, 2 error
 * @param fd: file descriptor
 * @retval the line read
 */
char				*get_next_line(int fd);
/**
 * @brief the function returns a line read from a file, /n (new line) included,
it works with multiple files at once
 * @note uses ft_strlen, ft_strjoin & ft_strchr 0 standart input,
1 standart ouput, 2 error
 * @param fd: file descriptor
 * @retval the line read from different fd's
 */
char				*get_next_line_multiple(int fd);
/**
 * @brief write a character on the standart output
 * @note fd 1
 * @param c: char
 * @retval none
 */
void				ft_putchar(char c);
/**
 * @brief writes a string on the standart output and returns it's lenght
 * @note fd 1
 * @param str: char pointer - string
 * @retval the lenght of the string
 */
int					ft_putstr(char *str);
/**
* @brief writes an int number on the standart output and
returns the lenght of the digits written
 * @note uses ft_nbrlen
 * @param nb; int
 * @retval the lenght of the digits of the number
 */
int					ft_putnbr(int nb);
/**
 * @brief calculates the lenght of the number. number of digits
 * @note takes minus as well
 * @param nb; long
 * @retval the lenght of the digits of the number
 */
long				ft_nbrlen(long nb);
/**
* @brief writes an unsigned int number on the standart output
and returns the lenght of the digits written
 * @note only takes unsigned numbers
 * @param nb; unsigned int
 * @retval the lenght of the digits of the number
 */
int					ft_putnbr_unsigned(unsigned int nb);
/**
 * @brief takes a number as a deciaml and returns it as hexadecimal
 * @note returns a string
 * @param nb: unsigned long long
 * @param x: uppercase hex or lowercase hex
 * @retval the hex value
 */
char				*ft_nbrtohex(unsigned long long nb, char x);

//** FT_PRINTF **//
/**
 * @brief prints on the standart output all the flags %s, %c, %d, %i, %p, %x %X
%% and %u
 * @note uses ft_putchar print_s, print_x, print_c, print_nbr,
print_nbr_u and print_p
 * @param str: const char pointer - the string with the flags
 * @param ... va_args - the argumaents mentioned after
 * @retval the lenght of the string
 */
int					ft_printf(const char *str, ...);
/**
 * @brief prints a character and returns the count for ft_printf
 * @note uses ft_putchar
 * @param c: char
 * @param count: int count of ft_printf
 * @return the count for ft_printf
 */
int					print_c(char c, int count);
/**
 * @brief prints a string and returns the count for ft_printf
 * @note uses ft_putstr, if str is NULL prints (null)
 * @param str: char pointer - string
 * @param count: int count of ft_printf
 * @retval the count for ft_printf
 */
int					print_s(char *str, int count);
/**
 * @brief prints a number and returns the count for ft_printf
 * @note uses ft_putnbr
 * @param nb: int
 * @param count: int count of ft_printf
 * @retval the count for ft_printf
 */
int					print_nbr(int nb, int count);
/**
 * @brief prints an unsigned number and returns the count for ft_printf
 * @note uses ft_putnbr_unsigned
 * @param nb: unsigned int
 * @param count: int count of ft_printf
 * @retval the count for ft_printf
 */
int					print_nbr_u(unsigned int nb, int count);
/**
* @brief  takes a deciaml number and prints a hexidecimal
number and returns the count for ft_printf
 * @note uses ft_nbrtohex, ft_putstr
 * @param nb: unsigned int
 * @param x: uppercase hex or lowercase hex
 * @param count: int count of ft_printf
 * @retval the count for ft_printf
 */
int					print_x(unsigned int nb, char x, int count);
/**
 * @brief prints an address and returns the count for ft_printf
 * @note uses ft_nbrtohex, ft_putstr
 * @param ptr: void pointer
 * @param count: int count of ft_printf
 * @retval the count for ft_printf
 */
int					print_p(void *ptr, int count);
/**
 * @brief uses the con_for_split() and returns the full char** for split
 norm reasons
 * @param an
 * @param j
 * @param temp2
 * @param temp
 * @return the full splited array of arrays
 */
char				**return_end_answer_for_split(char **an,
						int j, char *temp2, char *temp);
/**
 * @brief makes the last word array for split
 * @param temp
 * @return the last word array in the array for split
 */
char				*con_for_split(char *temp);
#endif
