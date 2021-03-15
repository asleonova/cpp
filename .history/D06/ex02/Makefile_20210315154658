# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/11 17:59:59 by dbliss            #+#    #+#              #
#    Updated: 2021/03/15 14:10:27 by dbliss           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization

INCLUDES = ./

SRCS = ./main.cpp

OBJ = $(SRCS:%.cpp=%.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -o $(NAME) $(OBJ)

%.o: %.c 
	clang++ -c $(CFLAGS) -I $(INCLUDES) $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean flean re