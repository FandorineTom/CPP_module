# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snorthmo <snorthmo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 15:33:25 by snorthmo          #+#    #+#              #
#    Updated: 2021/03/29 15:35:52 by snorthmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
SRC = ex01.cpp
OBJ = $(SRC:.cpp=.o)
CC = clang++
RM = rm -rf
FLAGS = -g -Wall -Werror -Wextra

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