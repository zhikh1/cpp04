# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 19:32:48 by nomargen          #+#    #+#              #
#    Updated: 2022/10/17 23:22:41 by nomargen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	animal

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRC			=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

INC			=	Animal.h Dog.h Cat.h WrongAnimal.h WrongCat.h

RM			=	rm -rf

all:	$(NAME)

$(NAME): $(INC) $(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
