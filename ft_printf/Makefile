# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 16:02:49 by ttaquet           #+#    #+#              #
#    Updated: 2023/10/23 11:47:30 by ttaquet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
OPTION = -I
HEADER_FILE = libft.h

SRC = 

SRC_BONUS = 

SRCS = $(addsuffix .c,$(SRC))
OBJ = $(addsuffix .o,$(SRC))

SRCS_BONUS = $(addsuffix .c,$(SRC_BONUS))
OBJ_BONUS = $(addsuffix .o,$(SRC_BONUS))

all: $(NAME)

bonus: $(OBJ_BONUS)
	ar -rcs $(NAME) $(OBJ_BONUS) $(HEADER_FILE)

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ) $(HEADER_FILE)


