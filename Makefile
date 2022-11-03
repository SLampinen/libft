# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slampine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 12:04:00 by slampine          #+#    #+#              #
#    Updated: 2022/11/03 13:20:54 by slampine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

FLAGS = -Wall -Wextra -Werror

OBJ = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft*.o

SRC = ft*.c

CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -I -o -c

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

