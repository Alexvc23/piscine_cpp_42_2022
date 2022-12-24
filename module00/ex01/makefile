
NAME = PhoneBook

CC = g++

AT = 

DIR_SRCS = ./srcs
DIR_OBJS = ./objs
INC_CONTACT = includes/Contact.hpp
INC_PHONEBOOK = includes/PhoneBook.hpp
SRCS_FILES = $(shell find ./srcs -maxdepth 1 -type f -iname "*.cpp" | cut -f 3 -d '/')
OBJS_FILES = $(SRCS_FILES:.cpp=.o)

SRCS = $(addprefix $(DIR_SRCS)/,$(SRCS_FILES)) 
OBJS = $(addprefix $(DIR_OBJS)/,$(OBJS_FILES))
FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME)	: $(OBJS)
	$(AT) $(CC) $^ $(FLAGS) -o $@

$(DIR_OBJS)/%.o : $(DIR_SRCS)/%.cpp
	$(AT) mkdir -p $(DIR_OBJS) 
	$(AT)$(CC) $(FLAGS) -I$(INC_CONTACT) -I$(INC_PHONEBOOK)  -c $< -o $@ 
clean:
	$(AT) rm -rf objs

fclean : clean
	$(AT) rm -rf $(NAME)

print:
	$(info OBJS_FILES = $(OBJS_FILES))
	$(info only files= $(SRCS_FILES))
	$(info files with paht = $(SRCS))
	$(info objs with paht = $(OBJS))
	$(info inc = $(INC))

re : fclean all 

.PHONY: clean fclean re all



