# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gquerre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 00:04:48 by gquerre           #+#    #+#              #
#    Updated: 2016/11/08 01:12:24 by gquerre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./ft_display_file.c

FLAG = -Wall -Wextra -Werror

OBJ = ft_display_file.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	gcc $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
