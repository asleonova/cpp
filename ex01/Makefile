# NAME = phonebook

# INCLUDES = ./

# HEADERS = ./Contacts.Class.hpp
		

# SRCS = ./main.cpp \
# 		./Contacts.Class.cpp \

# OBJ = $(SRCS:%.cpp=%.o)

# CFLAGS = -Wall -Wextra -Werror 

# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CC) -o $(NAME) $(OBJ)

# %.o: %.c $(HEADERS) 
# 	clang++ -c $(CFLAGS) -I $(INCLUDES) $< -o $@

# clean:
# 	rm -f $(OBJ)
# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean flean re

SRCS = main.cpp Contacts.Class.cpp Phonebook.Class.cpp 
OBJS = $(SRCS:.cpp=.o)
NAME = phonebook
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

.cpp.o:
			clang++ $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			clang++ $(OBJS) $(CFLAGS) -o $(NAME)

clean:
			rm -f $(OBJS)


fclean:		clean
			rm -f $(NAME)

re: fclean all
