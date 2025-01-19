NAME	=	libft.a

SRC		=	conversion/ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			conditional/ft_isalnum.c\
			conditional/ft_isalpha.c\
			conditional/ft_isascii.c\
			conditional/ft_isdigit.c\
			conditional/ft_isprint.c\
			conversion/ft_itoa.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			print/ft_putchar_fd.c\
			print/ft_putendl_fd.c\
			print/ft_putnbr_fd.c\
			print/ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_strncmp.c\
			ft_strlcat.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c

B_SRC	=	t_list/ft_lstadd_back_bonus.c\
			t_list/ft_lstadd_front_bonus.c\
			t_list/ft_lstclear_bonus.c\
			t_list/ft_lstdelone_bonus.c\
			t_list/ft_lstiter_bonus.c\
			t_list/ft_lstlast_bonus.c\
			t_list/ft_lstmap_bonus.c\
			t_list/ft_lstnew_bonus.c\
			t_list/ft_lstsize_bonus.c

CC		= 	gcc
CFLAGS	= 	-Wall -Werror -Wextra

OBJ		= 	${SRC:.c=.o}

B_OBJ	= 	${B_SRC:.c=.o}

RM		= 	rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJ}
	ar crs $(NAME) ${OBJ}

all:	$(NAME)

clean:
	$(RM) ${OBJ}
	$(RM) ${B_OBJ}

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

bonus:	$(OBJ) $(B_OBJ)
	ar rcs $(NAME) $(OBJ) $(B_OBJ)
