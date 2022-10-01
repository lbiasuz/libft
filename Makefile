# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 21:23:55 by lbiasuz           #+#    #+#              #
#    Updated: 2022/08/23 22:56:41 by lbiasuz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC_FILES	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_strlen.c ft_memset.c \
				ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
				ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
				ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_memcmp.c \
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
				ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
				ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c \
				ft_printf.c ft_converters.c ft_get_next_line.c \
				ft_get_next_line_utils.c

OUT_FILES	=	$(SRC_FILES:.c=.o)

HEAD_FILE	=	libft.h get_next_line.h ft_printf.h

COMPILER	=	gcc

OPTIONS		=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OUT_FILES)
	ar rc $(NAME) $(OUT_FILES)

%.o: %.c
	$(COMPILER) $(OPTIONS) -c $< 

clean:
	rm -f $(OUT_FILES)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re bonus