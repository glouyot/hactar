# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 15:58:23 by glouyot           #+#    #+#              #
#    Updated: 2017/02/12 20:25:29 by hmartzol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME		= framework_test.a

CFLAGS		= -Werror -Wextra -Wall

CC			= gcc

SRC			= ft_strnew.c\
			  ft_strlen.c\
			  ft_putchar.c

OBJ			= $(SRC:.c=.o)

INC			= framework_test.h

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	ar rc $@ $^
	ranlib $(NAME)

$./%.o: ./%.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
