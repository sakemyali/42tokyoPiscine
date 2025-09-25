NAME = bsq

SRCS = srcs/file_error_handling.c srcs/header_error_handling.c srcs/map_error_handling.c srcs/solver.c srcs/free.c srcs/print.c \
srcs/utils.c srcs/main.c srcs/ft_split.c srcs/read_file.c

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I include -c $< -o $@

$(NAME): ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

.DEFAULT_GOAL := all
