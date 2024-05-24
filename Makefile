# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 16:22:33 by bde-luce          #+#    #+#              #
#    Updated: 2024/05/24 17:30:12 by bde-luce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putchar.c ft_putstr.c ft_putptr.c ft_putnbr.c ft_putnbrhex.c \
		ft_num_len_ptr.c ft_num_len_nbr.c ft_check_type.c ft_printf.c

LIBFT_PATH =./libft
LIBFT = $(LIBFT_PATH)/libft.a

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):
	make -s -C $(LIBFT_PATH)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re