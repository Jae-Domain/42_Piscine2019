# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 14:33:40 by jdomanta          #+#    #+#              #
#    Updated: 2019/07/23 14:51:00 by jdomanta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
HEADER = includes/*.h
BINARIES = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

all: link

compile: $(SRC) $(HEADER)
	gcc -c $(SRC) $(HEADER)

link: compile
	ar rc libft.a $(BINARIES)
	ranlib libft.a

clean:
	rm $(BINARIES)
	rm $(HEADER).gch

fclean: clean
	/bin/rm libft.a

re: fclean all

.PHONY: re fclean clean link compile all
