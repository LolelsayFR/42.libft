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
			str/ft_toupper.c\
			str/ft_strcat.c

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
			custom/conversion/ft_lst_to_tab.c\
			custom/conversion/ft_rgb.c\
			custom/conversion/ft_ltoahex.c\
			custom/mem/ft_free_strtab.c\
			custom/ft_printfd/ft_printfd.c\
			custom/ft_printfd/ft_putchar_re_fd.c\
			custom/ft_printfd/ft_puthexa_fd.c\
			custom/ft_printfd/ft_putmem_fd.c\
			custom/ft_printfd/ft_putnbr_re_fd.c\
			custom/ft_printfd/ft_putstr_re_fd.c\
			custom/str/ft_strtabdup_lst.c\
			custom/str/ft_split_lst.c\
			custom/str/ft_strdup_lst.c\
			custom/str/ft_strjoin_lst.c\
			custom/mem/ft_alist.c\
			custom/str/ft_strmapi_lst.c\
			custom/str/ft_substr_lst.c\
			custom/str/ft_strtrim_lst.c\
			custom/str/ft_sort_str_tab.c\
			custom/mem/nufree.c\
			custom/t_list/ft_lst_rotate.c\
			custom/print/ft_lst_str_print.c\
			custom/t_list/ft_lst_swap.c\
			custom/t_list/ft_lst_removeone.c\
			custom/t_list/ft_logs.c\
			custom/ft_dummies.c\

CC		= 	gcc
CFLAGS	= 	-Wall -Werror -Wextra -g

OBJ		= 	${SRC:.c=.o}

B_OBJ	= 	${B_SRC:.c=.o}

C_OBJ	= 	${C_SRC:.c=.o} ${GNL:.c=.o} ${FTPRINTF:.c=.o}

RM		= 	rm -f

GNL_PATH	=	./modules/get_next_line
GNL			=	$(GNL_PATH)/get_next_line_bonus.c\
				$(GNL_PATH)/get_next_line_utils_bonus.c

PRINTF_PATH	=	./modules/ft_printf
FTPRINTF	=	$(PRINTF_PATH)/func/ft_printf.c\
				$(PRINTF_PATH)/func/ft_putchar_re.c\
				$(PRINTF_PATH)/func/ft_puthexa.c\
				$(PRINTF_PATH)/func/ft_putmem.c\
				$(PRINTF_PATH)/func/ft_putnbr_re.c\
				$(PRINTF_PATH)/func/ft_putstr_re.c\
				$(PRINTF_PATH)/func/ft_ltoa.c

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@


$(NAME): $(OBJ) $(B_OBJ) $(C_OBJ)
	ar rcs $(NAME) $(OBJ) $(B_OBJ) $(C_OBJ)

all: $(NAME)

bonus: $(NAME)

clean:
	$(RM) ${OBJ}
	$(RM) ${B_OBJ}
	$(RM) ${C_OBJ}

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
