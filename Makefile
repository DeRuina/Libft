# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druina <druina@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 15:54:26 by druina            #+#    #+#              #
#    Updated: 2023/02/08 09:47:00 by druina           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split1.c ft_split2.c ft_strchr.c ft_strdup.c ft_striteri.c\
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c get_next_line.c get_next_line_multiple.c ft_putchar.c\
ft_putstr.c ft_putnbr.c ft_nbrlen.c ft_putnbr_unsigned.c ft_nbrtohex.c ft_lstnew_bonus.c\
ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c print_nbr_u.c\
print_nbr.c print_p.c print_s.c print_x.c print_c.c ft_printf.c free_2d.c


OBJECT = $(SRC:.c=.o)

SRCPATH = $(addprefix ./src/, $(SRC))

OBJECTPATH = $(addprefix ./src/, $(OBJECT))

FLAGS = -Wall -Wextra -Werror

HEADER = ./src/libft.h

all: $(NAME)

$(NAME): $(SRCPATH)
	@cc $(FLAGS) -c $(SRCPATH) -I $(HEADER)
	@ar -rcs $(NAME) $(OBJECT)

clean:
	@rm -f $(OBJECT)
	@echo "\033[31mNO DON'T DO IT, NO!!!!\033[39m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31mWHY YOU KILL ME?!"
	@echo "$$KILL\033[39m"

re: fclean all

define KILL
              _
             | |
             | |===( )   //////
             |_|   |||  | o o|
                    ||| ( c  )                  ____
                     ||| \= /                  ||   \_
                      ||||||                   ||     |
                      ||||||                ...||__/|-"
                      ||||||             __|________|__
                        |||             |______________|
                        |||             || ||      || ||
                        |||             || ||      || ||
------------------------|||-------------||-||------||-||-------
                        |__>            || ||      || ||
endef
export KILL
