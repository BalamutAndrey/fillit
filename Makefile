# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eboris <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 15:16:46 by eboris            #+#    #+#              #
#    Updated: 2019/10/13 19:06:11 by eboris           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAGS = -Wall -Wextra -Werror
HEADERS = ./srcs/
SRC_PATH = ./srcs/
SRC = $(SRC_PATH)main.c $(SRC_PATH)file.c $(SRC_PATH)list.c $(SRC_PATH)tetlist.c $(SRC_PATH)checktet.c $(SRC_PATH)remspace_y.c $(SRC_PATH)remspace_x.c
LIB_NAMES = libft.a
LIBFT_PATH = ./libft/

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIB_NAMES)
			gcc $(SRC) -I $(HEADERS) -L$(LIBFT_PATH) -lft $(FLAGS) -o $(NAME)

$(LIB_NAMES):
			make -C $(LIBFT_PATH)

clean:
			make -C $(LIBFT_PATH) fclean

fclean: clean
			rm -rf $(NAME)

re: fclean all
