#-------------- NAME
NAME=			zombie

#-------------- SRCS
SRCS=			main.cpp\
				Zombie.cpp\
				newZombie.cpp\
				randomChump.cpp

#-------------- OBJS
OBJS_DIR=		.objs
OBJS=			$(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))

#-------------- COMPILER
CC=				clang++
FLAGS=			-Wall -Werror -Wextra -Iincludes/


#-------------- INCS
INCLUDES=		Zombie.hpp

#-------------- RM
RM=				/bin/rm -rf


all:		$(NAME)

$(NAME):	$(OBJS)
					@echo "Linking $(NAME)"
					@$(CC) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o:	%.cpp $(INCLUDES) | $(OBJS_DIR)
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