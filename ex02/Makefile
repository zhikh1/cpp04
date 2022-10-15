# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 19:32:48 by nomargen          #+#    #+#              #
#    Updated: 2022/10/13 23:02:38 by nomargen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fragtrap

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRC			=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

INC			=	ClapTrap.h ScavTrap.h FragTrap.h

RM			=	rm -rf

all:	$(NAME)

$(NAME): $(INC) $(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) $(INC) $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
