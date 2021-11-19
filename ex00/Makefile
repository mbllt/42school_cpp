NAME=		megaphone

SRCS=		megaphone.cpp

CC=			clang++
FLAGS=		-Wall -Werror -Wextra

OBJS=		$(SRCS:.cpp=.o)

RM=			/bin/rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
					$(CC) $(OBJS) -o $(NAME)

%.o:		%.cpp
					@echo "Compiling $<"
					$(CC) $(FLAGS) -o $@ -c $<

clean:
					$(RM) $(OBJS)

fclean:		clean
					$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
