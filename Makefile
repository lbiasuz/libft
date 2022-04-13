# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 21:23:55 by lbiasuz           #+#    #+#              #
#    Updated: 2022/04/12 21:34:52 by lbiasuz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC_FILES	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_strlen.c ft_strlen.c ft_memset.c \
				ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
				ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
				ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c


OUT_FILES	=	$(SRC_FILES:.c=.o)

HEAD_FILE	=	libft.h

COMPILER	=	gcc

OPTIONS		=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OUT_FILES)
	ar rc $(NAME) $(OUT_FILES)

%.o: %.c
	$(COMPILER) $(OPTIONS) -c $< 

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OUT_FILES)

re: fclean all

.PHONY:all clean fclean re