NAME = megaphone
SRCS = megaphone.cpp
CC = g++
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $< $(FLAGS) -o $@

%.o : %.cpp
	$(CC) -o $@ -c $< $(FLAGS)

clean:
	rm -rf *.o
fclean : clean
	rm -rf megaphone

re : fclean all

.PHONY: all clean fclean re