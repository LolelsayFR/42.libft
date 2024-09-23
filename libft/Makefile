NAME	= 	libft.a

SRC		= 	ft_strlen.c\
			ft_atoi.c

CC		= 	gcc
CFLAGS	= 	-Wall -Werror -Wextra

OBJ		= 	${SRC:.c=.o}

RM		= 	rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJ}
	ar crs $(NAME) ${OBJ}

all:	$(NAME)

clean:
	$(RM) ${OBJ}

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

