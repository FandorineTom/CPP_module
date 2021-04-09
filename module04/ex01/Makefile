# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snorthmo <snorthmo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/09 12:16:53 by snorthmo          #+#    #+#              #
#    Updated: 2021/04/09 13:17:23 by snorthmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = character
SRC = AWeapon.cpp Character.cpp Enemy.cpp PlasmaRifle.cpp PowerFist.cpp\
		RadScorpion.cpp SuperMutant.cpp CrossBow.cpp Demagorgan.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC = clang++
RM = rm -rf
FLAGS = -g -Wall -Werror -Wextra -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all