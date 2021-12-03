#-------------- NAME-----------------
NAME=			purified

#-------------- SRCS-----------------
SRCS_DIR=		srcs
SRCS_FILES=		main.cpp\
				AAnimal.cpp\
				Cat.cpp\
				Dog.cpp\
				Brain.cpp

SRCS=			$(addprefix $(SRCS_DIR)/,$(SRCS_FILES))

#-------------- OBJS------------------
OBJS_DIR=		.objs
OBJS=			$(addprefix $(OBJS_DIR)/,$(SRCS_FILES:.cpp=.o))

#-------------- COMPILER--------------
CC=				clang++
FLAGS=			-Wall -Werror -Wextra -Wshadow -Wno-shadow -Iincludes/


#-------------- INCS------------------
INC_DIR=		includes
INC_FILES=		AAnimal.hpp\
				Cat.hpp\
				Dog.hpp\
				Brain.hpp
INCLUDES=		$(addprefix $(INC_DIR)/,$(INC_FILES))

#-------------- RM---------------------
RM=				/bin/rm -rf


all:		$(NAME)

$(NAME):	$(OBJS)
					@echo "Linking $(NAME)"
					@$(CC) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.cpp $(INCLUDES) | $(OBJS_DIR)
					@echo "Compiling $<"
					@$(CC) $(FLAGS) -o $@ -c $<

$(OBJS_DIR):
					@mkdir -p $(OBJS_DIR)

clean:
					@echo "Deleting object files"
					@$(RM) $(OBJS)

fclean:		clean
					@echo "Deleting executable, objs_dir"
					@$(RM) $(NAME)
					@$(RM) $(OBJS_DIR)

re:			fclean all

.PHONY:		all clean fclean re