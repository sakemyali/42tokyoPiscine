.PHONY: all norm
.SILENT: norm

CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f

PROG_NAME=rush-02
INCLUDES_DIR=includes
SRCS_DIR=srcs

SRCS=$(addprefix $(SRCS_DIR)/, ft_checks.c ft_file.c ft_free.c ft_output.c ft_string.c ft_trie_ops.c ft_utils.c main.c)

all:
	$(CC) $(CFLAGS) -g -O0 ${SRCS} -o ${PROG_NAME} -I$(INCLUDES_DIR)

$(PROG_NAME): all

clean:
	$(RM) $(PROG_NAME)

fclean: clean

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader

test:
	./${PROG_NAME} 1154
	./${PROG_NAME} 327568
	./${PROG_NAME} 111100
	./${PROG_NAME} 1154324124214
