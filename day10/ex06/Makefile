# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 17:39:00 by jdomanta          #+#    #+#              #
#    Updated: 2019/07/23 23:02:15 by jdomanta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG = do-op
HEADER = doop.h
SRC = main.c functions.c operations.c
OBJECTS = main.o functions.o operations.o
FLAGS = -Wall -Wextra -Werror

all: compile 
	@gcc $(FLAGS) $(OBJECTS) -o $(PROG)

compile: $(SRC) 
	@gcc -c $^ 

clean:
	@-rm -f $(OBJECTS)
	@-rm -f $(HEADER).gch 

fclean: clean
	@-/bin/rm -f $(PROG)

re: fclean all compile

.PHONY: all clean fclean re
