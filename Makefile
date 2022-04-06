# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 21:23:55 by lbiasuz           #+#    #+#              #
#    Updated: 2022/04/05 22:59:55 by lbiasuz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC_FILES	=	isalpha.c isdigit.c isalnum.c isascii.c isprint.c strlen.c 

OUT_FILES	=	$(SRC_FILES:.c=.o)

HEAD_FILE	=	libft.h

COMPILER	=	gcc

OPTIONS		=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OUT_FILES)
	ar rc $(NAME) $(OUT_FILES)

%.o: %.c
	$(COMPILER) $(OPTIONS) $(HEAD_FILE) -c $< 

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OUT_FILES)

re: fclean all

.PHONY:all clean fclean re