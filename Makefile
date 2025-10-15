# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 15:30:00 by yaabdoul          #+#    #+#              #
#    Updated: 2025/10/15 16:13:37 by yaabdoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SO_NAME = libft.so
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(SO_NAME)

re: fclean all

.PHONY: all clean fclean re bonus so

