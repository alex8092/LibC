# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amerle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/28 07:07:27 by amerle            #+#    #+#              #
#    Updated: 2015/01/28 07:07:30 by amerle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
LD = ar

CFLAGS = -Wall -Wextra -Werror -Iinclude -g3

LDFLAGS = rc

LDFLAGS_TEST = -L. -lft

SRCS = 	src/common/ft_atoi.c \
		src/common/ft_bzero.c \
		src/common/ft_findinarray.c \
		src/common/ft_getnextline.c \
		src/common/ft_isnum.c \
		src/common/ft_itoa.c \
		src/common/ft_memalloc.c \
		src/common/ft_memcpy.c \
		src/common/ft_memdup.c \
		src/common/ft_memset.c \
		src/common/ft_putchar.c \
		src/common/ft_putchar_fd.c \
		src/common/ft_putendl.c \
		src/common/ft_putendl_fd.c \
		src/common/ft_putnbr.c \
		src/common/ft_putnbr_fd.c \
		src/common/ft_putnendl.c \
		src/common/ft_putnendl_fd.c \
		src/common/ft_putnstr.c \
		src/common/ft_putnstr_fd.c \
		src/common/ft_putstr.c \
		src/common/ft_putstr_fd.c \
		src/common/ft_sort.c \
		src/common/ft_strchr.c \
		src/common/ft_strcmp.c \
		src/common/ft_strcpy.c \
		src/common/ft_strdup.c \
		src/common/ft_strjoin.c \
		src/common/ft_strlen.c \
		src/common/ft_strncpy.c \
		src/common/ft_strndup.c \
		src/common/ft_strnjoin.c \
		src/common/ft_strsplit.c \
		src/common/ft_strstr.c \
		src/common/ft_strsub.c \
		src/common/ft_wstrlen.c \
		src/printer/ft_printer.c \
		src/printer/ft_printer_add.c \
		src/printer/ft_printer_addc.c \
		src/printer/ft_printer_addn.c \
		src/printer/ft_printer_adds.c \
		src/printer/ft_printer_addss.c \
		src/printer/ft_printer_autoflush.c \
		src/printer/ft_printer_flush.c \
		src/printer/ft_printer_flushn.c \
		src/printer/ft_printer_init.c \
		src/sstream/ft_sstream_add.c \
		src/sstream/ft_sstream_addw.c \
		src/sstream/ft_sstream_addwn.c \
		src/sstream/ft_sstream_addx.c \
		src/sstream/ft_sstream_addlx.c \
		src/sstream/ft_sstream_addllx.c \
		src/sstream/ft_sstream_addo.c \
		src/sstream/ft_sstream_addlo.c \
		src/sstream/ft_sstream_addllo.c \
		src/sstream/ft_sstream_addc.c \
		src/sstream/ft_sstream_addi.c \
		src/sstream/ft_sstream_addl.c \
		src/sstream/ft_sstream_addll.c \
		src/sstream/ft_sstream_addn.c \
		src/sstream/ft_sstream_adds.c \
		src/sstream/ft_sstream_addui.c \
		src/sstream/ft_sstream_addul.c \
		src/sstream/ft_sstream_addull.c \
		src/sstream/ft_sstream_check_reserve.c \
		src/sstream/ft_sstream_clear.c \
		src/sstream/ft_sstream_del.c \
		src/sstream/ft_sstream_new.c \
		src/sstream/ft_sstream_reserve.c \
		src/sstream/ft_sstream_reset_modifiers.c \
		src/sstream/ft_sstream_count_digits.c \
		src/sstream/ft_sstream_count_hexa.c \
		src/sstream/ft_sstream_intern_ui.c \
		src/sstream/ft_sstream_get_alignement.c \
		src/sstream/ft_sstream_count_octal.c \
		src/string/ft_string_app.c \
		src/string/ft_string_appn.c \
		src/string/ft_string_appc.c \
		src/string/ft_string_appwc.c \
		src/string/ft_string_appwn.c \
		src/string/ft_string_appw.c \
		src/string/ft_string_clear.c \
		src/string/ft_string_cpy.c \
		src/string/ft_string_del.c \
		src/string/ft_string_delptr.c \
		src/string/ft_string_insert.c \
		src/string/ft_string_insertn.c \
		src/string/ft_string_new.c \
		src/string/ft_string_newr.c \
		src/string/ft_string_news.c \
		src/string/ft_string_replace.c \
		src/string/ft_string_replaces.c \
		src/string/ft_string_reserve.c \
		src/string/ft_string_search.c \
		src/string/ft_string_searchc.c \
		src/string/ft_string_searchs.c \
		src/string/ft_string_substr.c \
		src/vector/ft_vector_clear.c \
		src/vector/ft_vector_clearfree.c \
		src/vector/ft_vector_del.c \
		src/vector/ft_vector_delptr.c \
		src/vector/ft_vector_erase.c \
		src/vector/ft_vector_new.c \
		src/vector/ft_vector_newr.c \
		src/vector/ft_vector_push.c

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
