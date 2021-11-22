#-------------- NAME
NAME=			phonebook

#-------------- SRCS
SRCS_DIR=		srcs
SRCS_FILES=		phonebook.cpp\
				contact.class.cpp
SRCS=			$(addprefix $(SRCS_DIR)/,$(SRCS_FILES))


#-------------- OBJS
OBJS_DIR=		.objs
OBJS=			$(addprefix $(OBJS_DIR)/,$(SRCS_FILES:.cpp=.o))
PATH_OBJS=		

#-------------- COMPILER
CC=				clang++
FLAGS=			-Wall -Werror -Wextra -Iincludes/


#-------------- INCS
INCS_DIR=		includes
INCS_FILES=		phonebook.hpp contact.class.hpp
INCLUDES=		$(addprefix $(INCS_DIR)/,$(INCS_FILES))

#-------------- RM
RM=				/bin/rm -rf


all:		$(NAME)

$(NAME):	$(OBJS)
					@echo "Linking $(NAME)"
					@$(CC) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.cpp $(INCLUDES) | $(OBJS_DIR)
					@echo "Compiling $<"
					@$(CC) $(FLAGS) -o $@ -c $<

$(OBJS_DIR):
					@mkdir -p $(OBJS_DIR) $(addprefix $(OBJS_DIR)/,$(PATH_OBJS))

clean:
					@echo "Deleting object files"
					@$(RM) $(OBJS)

fclean:		clean
					@echo "Deleting executable, objs_dir"
					@$(RM) $(NAME)
					@$(RM) $(OBJS_DIR)

re:			fclean all

.PHONY:		all clean fclean re