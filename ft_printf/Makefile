CC=cc
NAME=libftprintf.a

C_FLAGS=-Wall -Werror -Wextra
SRC=ft_printf.c ft_print_hex.c ft_print_ptr.c ft_print_int.c  ft_print_uint.c \
	ft_utils.c ft_utils_int.c  ft_strlcpy.c ft_memcpy.c
OBJ=$(SRC:.c=.o)
INCLUDES=.
CMD_RM=rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs libftprintf.a $(OBJ)

# --- REMOVE OR HIDE THIS RULES --- #
#exec:
#	cc -g -o printf *.o -L libprintf.a && ./printf
# --- REMOVE OR HIDE THIS RULES --- #

%.o: %.c
	$(CC) $(C_FLAGS) -c $< -o $@ -I.

clean:
	$(CMD_RM) $(OBJ)

fclean: clean
	$(CMD_RM) $(NAME) libftprintf.a

re: fclean clean all

.PHONY: all clean fclean re
