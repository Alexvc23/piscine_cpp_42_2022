
NAME = exec 

CC = c++

AT = 

DIR_SRCS = ./srcs
DIR_OBJS = ./objs
INC = includes/allheaders.hpp
SRCS_FILES = $(shell find ./srcs -maxdepth 1 -type f -iname "*.cpp" | cut -f 3 -d '/')
OBJS_FILES = $(SRCS_FILES:.cpp=.o)

SRCS = $(addprefix $(DIR_SRCS)/,$(SRCS_FILES)) 
OBJS = $(addprefix $(DIR_OBJS)/,$(OBJS_FILES))
FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME)	: $(OBJS)
	$(AT) $(CC) $^ -I$(INC) $(FLAGS) -o $@

$(DIR_OBJS)/%.o : $(DIR_SRCS)/%.cpp includes/* makefile
	$(AT) mkdir -p $(DIR_OBJS) 
	$(AT)$(CC) $(FLAGS) -I$(INC)  -c $< -o $@ 
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



