# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gquerre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 17:14:43 by gquerre           #+#    #+#              #
#    Updated: 2016/11/04 20:10:51 by gquerre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./includes/

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

FLAG = -Wall -Wextra -Werror

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : $(NAME)

$(NAME) :
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
