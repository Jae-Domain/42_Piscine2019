# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 13:08:59 by jdomanta          #+#    #+#              #
#    Updated: 2019/07/24 22:50:03 by jdomanta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG = ft_display_file
HEADER = ft_display_file.h
SRC = ft_display_file.c
OBJECTS = ft_display_file.o 
FLAGS = -Wall -Wextra -Werror

all: $(PROG) $(OBJECTS)
	@gcc $(OBJECTS) -o $(PROG)

%.o: %.s $(HEADER)
	@gcc $(FLAGS) -c $^ 

clean:
	@-rm -f $(OBJECTS)
	@-rm -f $(HEADER).gch 

fclean: clean
	@-/bin/rm -f $(PROG)

re: fclean all compile

.PHONY: all clean fclean re compile
