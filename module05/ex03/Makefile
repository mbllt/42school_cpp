#-------------- NAME-----------------
NAME=			intern
#------------------------------------


#-------------- SRCS-----------------
SRCS_DIR=		srcs
SRCS_FILES=		main.cpp\
				Bureaucrat.cpp\
				AForm.cpp\
				ShrubberyCreationForm.cpp\
				RobotomyRequestForm.cpp\
				PresidentialPardonForm.cpp\
				Intern.cpp
SRCS=			$(addprefix $(SRCS_DIR)/,$(SRCS_FILES))
#------------------------------------


#-------------- OBJS-----------------
OBJS_DIR=		.objs
OBJS=			$(addprefix $(OBJS_DIR)/,$(SRCS_FILES:.cpp=.o))
#------------------------------------


#-------------- COMPILER-------------
CC=				clang++
FLAGS=			-Wall -Werror -Wextra -Iincludes/
#------------------------------------


#-------------- INCS-----------------
INC_DIR=		includes
INC_FILES=		Bureaucrat.hpp\
				AForm.hpp\
				ShrubberyCreationForm.hpp\
				RobotomyRequestForm.hpp\
				PresidentialPardonForm.hpp\
				Intern.hpp
INCLUDES=		$(addprefix $(INC_DIR)/,$(INC_FILES))
#------------------------------------


#-------------- RM-------------------
RM=				/bin/rm -rf
#------------------------------------


all:		$(NAME)

$(NAME):	$(OBJS)
					@echo "Linking $(NAME)"
					@$(CC) -fsanitize=address -g3 $(OBJS) -o $(NAME)
#					@$(CC) -fsanitize=address -g3 $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.cpp $(INCLUDES) | $(OBJS_DIR)
					@echo "Compiling $<"
					@$(CC) -fsanitize=address -g3 $(FLAGS) -o $@ -c $<
#					@$(CC) -fsanitize=address -g3 $(FLAGS) -o $@ -c $<

$(OBJS_DIR):
					@mkdir -p $(OBJS_DIR)

clean:
					@echo "Deleting object files"
					@$(RM) $(OBJS)
					@$(RM) *_shrubbery

fclean:		clean
					@echo "Deleting executable, objs_dir"
					@$(RM) $(NAME)
					@$(RM) $(OBJS_DIR)

re:			fclean all

.PHONY:		all clean fclean re