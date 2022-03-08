SRCS	=	Account.cpp test.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	clang++ -Wall -Wextra -Werror -std=c++98

NAME	=	The_Job_Of_Your_Dreams

RM		=	rm -f

%.o%.cpp:	Account.hpp
			$(CC) -c $< -o $@

all:		${NAME}

$(NAME):	${OBJS}
			$(CC) $^ -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}
			
.PHONY:		all clean fclean re