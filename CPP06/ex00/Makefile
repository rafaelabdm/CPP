NAME = convert

SRC =	main.cpp ScalarConverter.cpp

OBJ = ${SRC:.cpp=.o}

INCLUDE = ScalarConverter.hpp colors.hpp

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

all: ${NAME}

${NAME}: ${OBJ} ${INCLUDE}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean:
	${RM} ${OBJ} ${NAME}

re: fclean all

%.o: %.cpp ${INCLUDE}
	${CPP} ${CPPFLAGS} -c $< -o $@

.PHONY: all clean fclean re