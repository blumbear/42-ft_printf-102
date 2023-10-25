# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 16:02:49 by ttaquet           #+#    #+#              #
#    Updated: 2023/10/22 14:58:40 by ttaquet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
OPTION = -c -I
HEADER_FILE = libft.h

SRC = ft_isalnum \
ft_isalpha \
ft_isdigit \
ft_isascii \
ft_isprint \
ft_strlen \
ft_memset \
ft_bzero \
ft_memcpy \
ft_memmove \
ft_strlcpy \
ft_strlcat \
ft_toupper \
ft_tolower \
ft_strchr \
ft_strrchr \
ft_strncmp \
ft_memchr \
ft_memcmp \
ft_strnstr \
ft_atoi \
ft_calloc \
ft_strdup \
ft_substr \
ft_strjoin \
ft_split \
ft_itoa \
ft_strtrim \
ft_strmapi \
ft_striteri \
ft_putchar_fd \
ft_putstr_fd \
ft_putendl_fd \
ft_putnbr_fd

SRC_BONUS = ft_lstnew \
ft_lstadd_front \
ft_lstsize \
ft_lstlast \
ft_lstadd_back \
ft_lstdelone \
ft_lstclear \
ft_lstiter \
ft_lstmap

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

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ) $(HEADER_FILE)


