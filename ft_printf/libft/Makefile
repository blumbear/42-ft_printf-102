# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 16:02:49 by ttaquet           #+#    #+#              #
#    Updated: 2023/10/26 14:14:40 by ttaquet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
OPTION = -c -I
HEADER_FILE = ft_printf.h

SRC = ft_isalpha \
ft_isdigit \
ft_isalnum \
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
ft_strtrim \
ft_split \
ft_itoa \
ft_strmapi \
ft_striteri \
ft_putchar_fd \
ft_putstr_fd \
ft_putendl_fd \
ft_putnbr_fd 


SRCS = $(addsuffix .c,$(SRC))
OBJ = $(addsuffix .o,$(SRC))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OPTION) $(SRCS) 
	ar -rcs $(NAME) $(OBJ) $(HEADER_FILE)

SRC_BONUS = ft_lstnew \
ft_lstadd_front \
ft_lstsize \
ft_lstlast \
ft_lstadd_back \
ft_lstdelone \
ft_lstclear \
ft_lstiter \
ft_lstmap


SRCS_BONUS = $(addsuffix .c,$(SRC_BONUS))
OBJ_BONUS = $(addsuffix .o,$(SRC_BONUS))

bonus : $(OBJ_BONUS)
	$(CC) $(C0FLAGS) $(OPTION) $(SRCS_BONUS) 
	ar -rcs $(NAME) $(OBJ_BONUS) $(HEADER_FILE)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 