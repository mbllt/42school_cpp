#-------------- NAME
NAME=			phonebook

#-------------- SRCS
SRCS_DIR=		srcs
SRCS_FILES=		phonebook.cpp\
				contact.class.cpp
SRCS=			$(addprefix $(SRCS_DIR)/,$(SRCS_FILES))


#-------------- OBJS
OBJS=		$(SRCS:.cpp=.o)


#-------------- COMPILER
CC=			clang++
FLAGS=		-Wall -Werror -Wextra -Iincludes/


#-------------- INCS
INCLUDES=	includes/phonebook.hpp includes/contact.class.hpp


#-------------- RM
RM=			/bin/rm -rf


all:		$(NAME)

$(NAME):	$(OBJS)
					@echo "Linking $(NAME)"
					@$(CC) $(OBJS) -o $(NAME)

%.o:		%.cpp $(INCLUDES)
					@echo "Compiling $<"
					@$(CC) $(FLAGS) -o $@ -c $<

clean:
					@echo "Deleting object files"
					@$(RM) $(OBJS)

fclean:		clean
					@echo "Deleting executable"
					@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re