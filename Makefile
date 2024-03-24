NAME = so_long
CC = gcc 
CFLAGS = -Wall -Wextra -Werror -Imlx
SOURCE = boolean_check.c so_long.c utils.c utils1.c utils2.c \
		 	./get_next_line/get_next_line.c \
			./get_next_line/get_next_line_utils.c draw.c load_elem.c \
			event_tools.c event.c
INCLUDE = ./libft/libft.a ./ft_printf/libftprintf.a
OBJ		= ${SOURCE:.c=.o}

all:$(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(INCLUDE) -lmlx -framework OpenGL -framework AppKit -o $(NAME) 

clean: 
	rm -rf ${OBJ} ${BOBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all