NAME = Fixed

SRC = main.cpp Fixed.cpp

OBJ = ${SRC:.cpp=.o}

INCLUDE = Fixed.hpp

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

%.o: %.cpp
	${CPP} ${CPPFLAGS} -c $< -o $@

.PHONY: all clean fclean re
