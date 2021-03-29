# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snorthmo <snorthmo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/21 14:57:31 by snorthmo          #+#    #+#              #
#    Updated: 2021/03/29 11:10:44 by snorthmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = phonebook.cpp user.class.cpp phonebook.class.cpp
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
