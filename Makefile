NAME = so_long
CC = cc 
CFLAGS = -Wall -Wextra -Werror -Imlx 
SOURCE = boolean_check.c so_long.c utils.c utils1.c utils2.c \
		 	./get_next_line/get_next_line.c \
			./get_next_line/get_next_line_utils.c draw.c load_elem.c \
			event_tools.c event.c \
			./my_libft/ft_itoa.c ./my_libft/ft_strncmp.c ./my_libft/ft_strrchr.c \
			./my_ft_printf/ft_print_hexa.c ./my_ft_printf/ft_print_hexa1.c ./my_ft_printf/ft_print_pointer.c \
			./my_ft_printf/ft_print_unsg.c ./my_ft_printf/ft_printf.c ./my_ft_printf/ft_putchar.c ./my_ft_printf/ft_putstr.c \
			./my_ft_printf/ft_putnbr.c

OBJ		= ${SOURCE:.c=.o}

all:$(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME) 

clean: 
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all
