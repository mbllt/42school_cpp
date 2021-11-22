NAME=		megaphone

SRCS=		megaphone.cpp

CC=			clang++
FLAGS=		-Wall -Werror -Wextra

OBJS=		$(SRCS:.cpp=.o)

RM=			/bin/rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
					@echo "Linking $(NAME)"
					@$(CC) $(OBJS) -o $(NAME)

%.o:		%.cpp
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
