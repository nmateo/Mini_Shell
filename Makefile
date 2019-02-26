NAME	= mysh

CC	= @gcc -g

RM	= rm -f

SRCS	= ./lib/my/my_compute_power_rec.c \
	  ./lib/my/my_compute_square_root.c \
	  ./lib/my/my_getnbr.c \
	  ./lib/my/my_isneg.c \
	  ./lib/my/my_p_buint.c \
	  ./lib/my/my_printf.c \
	  ./lib/my/my_put_nbase_long.c \
	  ./lib/my/my_put_nbase_uint.c \
	  ./lib/my/my_put_nbr.c \
	  ./lib/my/my_putchar.c \
	  ./lib/my/my_putstr.c \
	  ./lib/my/my_errstr.c \
	  ./lib/my/my_putstroct.c \
	  ./lib/my/my_revstr.c \
	  ./lib/my/my_strcmp.c \
	  ./lib/my/my_strcpy.c \
	  ./lib/my/my_strlen.c \
	  ./lib/my/my_strlowcase.c \
	  ./lib/my/my_strncmp.c \
	  ./lib/my/my_strncpy.c \
	  ./lib/my/my_strupcase.c \
	  ./lib/my/my_swap.c \
	  ./lib/my/my_varcmp.c \
	  ./main.c \
	  ./src/sh_utils.c \
	  ./src/environment3.c \
	  ./src/environment2.c \
	  ./src/parsing.c \
	  ./src/parsing2.c \
	  ./src/chdir.c \
	  ./src/str_to_word_tab.c \
	  ./src/binary.c \
	  ./src/environment.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
