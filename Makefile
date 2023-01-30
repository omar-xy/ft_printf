# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 21:27:44 by otaraki           #+#    #+#              #
#    Updated: 2022/11/13 12:37:47 by otaraki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
	ft_putchar.c \
	ft_pustr.c \
	ft_putnbr.c \
	ft_putunsnbr.c \
	ft_checkcheck.c\
	ft_puthexl.c\
	ft_puthexu.c\
	ft_putadd.c\
	ft_check_ag.c

OBJS = $(SRCS:.c=.o)

all:$(NAME)

%.o:%.c printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	ar cr $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all