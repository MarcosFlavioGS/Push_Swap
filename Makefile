# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 16:13:23 by mflavio-          #+#    #+#              #
#    Updated: 2023/04/11 19:50:50 by mflavio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

SRC = 	src/main.c			\
		src/ft_error.c		\
		src/check_stack.c	\
		src/create_list.c	\
		src/check_sorted.c	\
		src/lst_len.c		\
		src/get_index.c		\
		src/sort_3.c		\
		src/sort_bigger.c	\
		src/clear_stack.c	\
		src/radix.c			\
		src/push.c			\
		src/rotate.c		\
		src/swap.c			\
		src/reverse_rotate.c

OBJ = ${SRC:src/%.c=obj/%.o}

LIBFT = libft/libft.a

all: ${LIBFT} ${NAME}

${LIBFT}:
	$(MAKE) -C libft/

${NAME}: ${OBJ} ${LIBFT}
	gcc ${FLAGS} -o $@ $^

obj/%.o: src/%.c
	mkdir -p obj
	gcc ${FLAGS} -c $< -o $@

clean:
	rm -rf obj
	$(MAKE) -C libft/ clean

fclean: clean
	rm -rf ${NAME}
	$(MAKE) -C libft/ fclean

re: fclean all
