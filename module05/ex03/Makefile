# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snorthmo <snorthmo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/10 02:12:39 by snorthmo          #+#    #+#              #
#    Updated: 2021/04/10 15:59:08 by snorthmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat
SRC = Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp Intern.cpp main.cpp
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