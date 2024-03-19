NAME = so_long
CC = gcc 
CFLAGS = -Wall -Wextra -Werror -Imlx_linux
SOURCE = boolean_check.c so_long.c utils.c utils1.c utils2.c ./get_next_line/get_next_line.c ./get_next_line/get_next_line_utils.c draw.c load_elem.c
INCLUDE = ./libft/libft.a ./ft_printf/libftprintf.a
OBJ		= ${SOURCE:.c=.o}

all:$(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(INCLUDE) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME) 

clean: 
	rm -rf ${OBJ} ${BOBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all