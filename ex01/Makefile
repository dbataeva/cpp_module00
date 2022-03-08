NAME	=	phone_book

SRCS	=	contact.cpp phone_book.cpp main.cpp 

OBJS	=	$(SRCS:.cpp=.o)

INCLUDE	=	contact.hpp phonebook.hpp

CC		=	clang++ -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

%.o%.cpp:	$(INCLUDE)
			$(CC) -c $< -o $@

all:	${NAME}

$(NAME):	${OBJS} 
			$(CC) $^ -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}
			
.PHONY:		all clean fclean re