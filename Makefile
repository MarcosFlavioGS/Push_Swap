# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 16:13:23 by mflavio-          #+#    #+#              #
#    Updated: 2023/03/28 17:31:00 by mflavio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

SRC = 	main.c			\
		ft_error.c		\
		check_stack.c	\
		create_list.c	\
		check_sorted.c	\
		lst_len.c		\
		get_index.c		\
		sort_3.c		\
		print_list.c	\
		reverse_list.c	\
		sort_bigger.c	\
		get_position.c	\
		get_tgt_pos.c	\
		sa.c			\
		ra.c			\
		rra.c			\
		pb.c			\
		clear_stack.c

OBJ = ${SRC:.c=.o}

LIBFT = libft/libft.a

all: ${LIBFT} ${NAME}

${LIBFT}:
	$(MAKE) -C libft/

${NAME}: ${OBJ} ${LIBFT}
	gcc ${FLAGS} -o $@ $^

%.o: %.c
	gcc ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJ}
	$(MAKE) -C libft/ clean

fclean: clean
	rm -rf ${NAME}
	$(MAKE) -C libft/ fclean

re: fclean all
