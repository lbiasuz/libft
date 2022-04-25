# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 21:23:55 by lbiasuz           #+#    #+#              #
#    Updated: 2022/04/25 01:38:09 by lbiasuz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC_FILES	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_strlen.c ft_strlen.c ft_memset.c \
				ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
				ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
				ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_memcmp.c \
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
				ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_FILES	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

B_OUT_FILES	=	$(BONUS_FILES:.c=.o)

OUT_FILES	=	$(SRC_FILES:.c=.o)

HEAD_FILE	=	libft.h

COMPILER	=	gcc

OPTIONS		=	-Wall -Wextra -Werror

all: $(NAME)

bonus: $(B_OUT_FILES)
	ar rc $(NAME) $(B_OUT_FILES)

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