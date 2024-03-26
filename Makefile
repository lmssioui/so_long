NAME = so_long
CC = gcc 
CFLAGS = -Wall -Wextra -Werror -Imlx
SOURCE = boolean_check.c so_long.c utils.c utils1.c utils2.c \
		 	./get_next_line/get_next_line.c \
			./get_next_line/get_next_line_utils.c draw.c load_elem.c \
			event_tools.c event.c \
			./libft/ft_itoa.c ./libft/ft_strncmp.c ./libft/ft_strrchr.c \
			./ft_printf/ft_print_hexa.c ./ft_printf/ft_print_hexa1.c ./ft_printf/ft_print_pointer.c \
			./ft_printf/ft_print_unsg.c ./ft_printf/ft_printf.c ./ft_printf/ft_putchar.c ./ft_printf/ft_putstr.c \
			./ft_printf/ft_putnbr.c

OBJ		= ${SOURCE:.c=.o}

all:$(NAME)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(INCLUDE) -lmlx -framework OpenGL -framework AppKit -o $(NAME) 

clean: 
	rm -rf ${OBJ} ${BOBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all