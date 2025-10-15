# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 15:30:00 by yaabdoul          #+#    #+#              #
#    Updated: 2025/10/15 15:21:36 by yaabdoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SO_NAME = libft.so
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

# ====================== Rules ======================

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: all
	@echo "Bonus functions compiled (if included in SRC)."

so: $(OBJ)
	$(CC) -shared -o $(SO_NAME) $(OBJ)
	@echo "$(SO_NAME) created."

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(SO_NAME)

re: fclean all

.PHONY: all clean fclean re bonus so

