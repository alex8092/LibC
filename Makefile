CC = gcc
LD = ar

CFLAGS = -Wall -Wextra -Werror -Iinclude -g3

LDFLAGS = rc

LDFLAGS_TEST = -L. -lft

SRCS = $(shell find src -name "*.c")

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(LD) $(LDFLAGS) $@ $^
	ranlib $@

test: $(NAME)
	$(CC) -o $@ tests/main.c $(LDFLAGS_TEST) $(CFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test