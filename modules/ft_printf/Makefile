NAME	=	libftprintf.a

OBJ		=	func/ft_printf.o\
			func/ft_printf.o\
			func/ft_putchar_re.o\
			func/ft_puthexa.o\
			func/ft_putmem.o\
			func/ft_putnbr_re.o\
			func/ft_putstr_re.o\
			func/ft_ltoa.o

CFLAGS	= 	-Wall -Werror -Wextra

all:	$(NAME)

$(NAME): $(OBJ)
	ar crs $(NAME) $^

clean:
	$(RM) ${OBJ}

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
