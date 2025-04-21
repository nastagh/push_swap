NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c \
       stack/stack_utils.c \
       stack/stack_checks.c \
       sort/sort.c \
       sort/sort_small.c \
       sort/sort_big.c \
       sort/sort_big_utils.c \
       sort/sort_small_utils.c \
       operations/operations.c \
       operations/swap_utils.c \
       operations/push_utils.c \
       operations/rotate_utils.c \
       operations/reverse_utils.c \
       utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
