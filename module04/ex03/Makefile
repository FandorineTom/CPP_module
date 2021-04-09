# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snorthmo <snorthmo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/09 17:12:24 by snorthmo          #+#    #+#              #
#    Updated: 2021/04/10 01:36:48 by snorthmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
SRC = Amateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
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