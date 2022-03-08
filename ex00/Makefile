SRCS	=	megaphone.cpp

OBJS	=	megaphone.o

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	megaphone

RM		=	rm -f

all:		${NAME}

$(NAME):	${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}
			
.PHONY:		all clean fclean re