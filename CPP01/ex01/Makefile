NAME = zombie

SRC = Zombie.cpp zombieHorde.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

all: ${NAME}

${NAME}: ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean:
	${RM} ${OBJ} ${NAME}

re: all

%.o: %.cpp
	${CPP} ${CPPFLAGS} -c $< -o $@

.PHONY: all clean fclean re
