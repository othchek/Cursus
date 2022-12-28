# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otchekai <otchekai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 12:09:19 by otchekai          #+#    #+#              #
#    Updated: 2022/12/28 09:43:36 by otchekai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT = client
SERVER = server

SRC_C = client.c
SRC_S = server.c
OBJ_C = $(SRC_C:.c=.o)
OBJ_S = $(SRC_S:.c=.o)
LIBFT = ./libft/libft.a
LIBFT_DIR = ./libft
FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_DIR = ./ft_printf


CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : $(CLIENT) $(SERVER)

$(CLIENT): $(LIBFT) $(FT_PRINTF) $(OBJ_C)
	@$(CC) $(CFLAGS) $(SRC_C) $(FT_PRINTF) $(LIBFT) -o $(CLIENT)
	@printf "client ready.\n"

$(SERVER): $(LIBFT) $(FT_PRINTF) $(OBJ_S)
	@$(CC) $(CFLAGS) $(SRC_S) $(FT_PRINTF) $(LIBFT) -o $(SERVER)
	@printf "server ready.\n"

$(FT_PRINTF):
	@$(MAKE) -C ./ft_printf

$(LIBFT):
	@$(MAKE) -C ./libft

clean:
	@ $(RM) $(CLIENT) $(SERVER)
	@ $(RM) $(OBJ_C) $(OBJ_S)

fclean: clean
	@ $(MAKE) fclean -C $(LIBFT_DIR)
	@ $(MAKE) fclean -C $(FT_PRINTF_DIR)

re: fclean all

.PHONY: clean re fclean 