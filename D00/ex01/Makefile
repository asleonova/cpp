# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/11 18:00:49 by dbliss            #+#    #+#              #
#    Updated: 2021/02/11 18:00:51 by dbliss           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

INCLUDES = ./

HEADER = ./Contacts.Class.hpp ./Phonebook.Class.hpp
		
SRCS = ./main.cpp ./Contacts.Class.cpp ./Phonebook.Class.cpp 

OBJ = $(SRCS:%.cpp=%.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -o $(NAME) $(OBJ)

%.o: %.c $(HEADER) 
	clang++ -c $(CFLAGS) -I $(INCLUDES) $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean flean re