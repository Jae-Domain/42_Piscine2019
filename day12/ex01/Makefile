# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 13:08:59 by jdomanta          #+#    #+#              #
#    Updated: 2019/07/25 21:57:14 by jdomanta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG = ft_cat
HEADER = ft_cat.h
SRC = functions.c ft_cat.c 
OBJECTS = ft_cat.o functions.o
FLAGS = -Wall -Wextra -Werror

all: $(OBJECTS)
	gcc $(OBJECTS) -o $(PROG)

$(OBJECTS): $(SRC) $(HEADER)
	gcc $(FLAGS) -c $^ 

clean:
	@-rm -f $(OBJECTS)
	@-rm -f $(HEADER).gch 

fclean: clean
	@-/bin/rm -f $(PROG)

re: fclean all compile

.PHONY: all clean fclean re compile
