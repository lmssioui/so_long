NAME = libftprintf.a

SRC = ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_strlen.c ft_print_hexa.c ft_print_hexa1.c ft_print_pointer.c ft_print_unsg.c ft_strchr.c

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all = $(NAME)

LIBC = ar -rc
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME} : ${OBJ}

.c.o:
	${CC} ${CFLAGS} -c $< -o $@
	${LIBC} ${NAME} $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
