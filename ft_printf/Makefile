# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 16:02:49 by ttaquet           #+#    #+#              #
#    Updated: 2023/10/26 14:31:56 by ttaquet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -Iinclude -Ilibft

SRCS = ft_printf.c \
	ft_nbr.c \
	libft/ft_putnbr_fd.c \
	libft/ft_putstr_fd.c \
	libft/ft_putchar_fd.c \
	libft/ft_strlen.c \
	libft/ft_substr.c \
	libft/ft_strdup.c \

OBJS = $(SRCS:.c=.o)

all: ${NAME}

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean ${NAME}

.PHONY: all, clean, fclean, re, libft