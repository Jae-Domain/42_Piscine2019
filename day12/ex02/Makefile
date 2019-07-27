# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 13:08:59 by jdomanta          #+#    #+#              #
#    Updated: 2019/07/24 13:09:02 by jdomanta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG = ft_tail
HEADER = ft_tail.h
SRC = functions.c ft_tail.c 
OBJECTS = ft_tail.o functions.o
FLAGS = -Wall -Wextra -Werror

all: $(PROG)

$(PROG): $(OBJECTS)
	@gcc $^ -o $@

%.o: %.s $(HEADER)
	@gcc $(FLAGS) -c $^ 

clean:
	@-rm -f $(OBJECTS)
	@-rm -f $(HEADER).gch 

fclean: clean
	@-/bin/rm -f $(PROG)

re: fclean all compile

.PHONY: all clean fclean re compile
