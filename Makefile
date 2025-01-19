NAME	=	libft.a

SRC		=	conversion/ft_atoi.c\
			mem/ft_bzero.c\
			mem/ft_calloc.c\
			conditional/ft_isalnum.c\
			conditional/ft_isalpha.c\
			conditional/ft_isascii.c\
			conditional/ft_isdigit.c\
			conditional/ft_isprint.c\
			conversion/ft_itoa.c\
			mem/ft_memchr.c\
			mem/ft_memcmp.c\
			mem/ft_memcpy.c\
			mem/ft_memmove.c\
			mem/ft_memset.c\
			print/ft_putchar_fd.c\
			print/ft_putendl_fd.c\
			print/ft_putnbr_fd.c\
			print/ft_putstr_fd.c\
			str/ft_split.c\
			str/ft_strchr.c\
			str/ft_strdup.c\
			str/ft_striteri.c\
			str/ft_strjoin.c\
			str/ft_strlcat.c\
			str/ft_strlcpy.c\
			str/ft_strlen.c\
			str/ft_strmapi.c\
			str/ft_strncmp.c\
			str/ft_strlcat.c\
			str/ft_strnstr.c\
			str/ft_strrchr.c\
			str/ft_strtrim.c\
			str/ft_substr.c\
			str/ft_tolower.c\
			str/ft_toupper.c

B_SRC	=	t_list/ft_lstadd_back_bonus.c\
			t_list/ft_lstadd_front_bonus.c\
			t_list/ft_lstclear_bonus.c\
			t_list/ft_lstdelone_bonus.c\
			t_list/ft_lstiter_bonus.c\
			t_list/ft_lstlast_bonus.c\
			t_list/ft_lstmap_bonus.c\
			t_list/ft_lstnew_bonus.c\
			t_list/ft_lstsize_bonus.c

C_SRC	=	custom/conditional/ft_islower.c\
			custom/conditional/ft_isupper.c\
			custom/conditional/ft_isspace.c\
			custom/conversion/ft_ltoa.c\
			custom/conversion/ft_atol.c\
			custom/mem/ft_free_tab.c\
			custom/ft_printfd/ft_printfd.c\
			custom/ft_printfd/ft_putchar_re_fd.c\
			custom/ft_printfd/ft_puthexa_fd.c\
			custom/ft_printfd/ft_putmem_fd.c\
			custom/ft_printfd/ft_putnbr_re_fd.c\
			custom/ft_printfd/ft_putstr_re_fd.c

CC		= 	gcc
CFLAGS	= 	-Wall -Werror -Wextra

OBJ		= 	${SRC:.c=.o}

B_OBJ	= 	${B_SRC:.c=.o}

C_OBJ	= 	${C_SRC:.c=.o} ${GNL:.c=.o}

RM		= 	rm -f

GNL_PATH		=	./modules/get_next_line
GNL				=	$(GNL_PATH)/get_next_line_bonus.c\
					$(GNL_PATH)/get_next_line_utils_bonus.c

FTPRINTF_PATH	=	./modules/ft_printf
FTPRINTF		=	$(FTPRINTF_PATH)/libftprintf.a

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@


$(NAME): $(OBJ) $(B_OBJ) $(C_OBJ) $(FTPRINTF)
	ar rcs $(NAME) $(OBJ) $(B_OBJ) $(C_OBJ) $(FTPRINTF)

all: $(NAME)

bonus: $(NAME)

$(FTPRINTF):
	@$(MAKE) --no-print-directory -C $(FTPRINTF_PATH)
	@$(MAKE) --no-print-directory clean -C $(FTPRINTF_PATH)

clean:
	$(RM) ${OBJ}
	$(RM) ${B_OBJ}
	$(RM) ${C_OBJ}

fclean: clean
	$(RM) $(NAME)
	@$(MAKE) --no-print-directory fclean -C $(FTPRINTF_PATH)

re: fclean all

.PHONY: all clean fclean re bonus
