# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 16:13:23 by mflavio-          #+#    #+#              #
#    Updated: 2023/02/22 16:13:52 by mflavio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

SRC = main.c

OBJ = ${SRC:.c=.o}

LIBFT = libft/libft.a

all:
	make -C libft/ all
	gcc ${FLAGS} -c ${SRC}
	gcc -o ${NAME} ${OBJ} ${LIBFT}
clean:
	rm -rf ${OBJ}
	make -C libft/ clean
fclean: clean
	rm -rf ${NAME}
	make -C libft/ fclean
re: fclean all
