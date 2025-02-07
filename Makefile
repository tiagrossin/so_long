# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarosa-b <sarosa-b@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/31 18:17:08 by sarosa-b          #+#    #+#              #
#    Updated: 2025/01/31 18:19:47 by sarosa-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME		= so_long
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
MLX_FLAGS	= -lglfw -L"/Users/$(USER)/.brew/opt/glfw/lib/" # Ajusta según tu sistema

# Rutas
SRC_DIR		= srcs
INC_DIR		= includes
LIBFT_DIR	= libft
MLX_DIR		= mlx

# Archivos
SRCS		= $(SRC_DIR)/main.c $(SRC_DIR)/map_parser.c $(SRC_DIR)/game.c \
			  $(SRC_DIR)/render.c $(SRC_DIR)/player.c $(SRC_DIR)/utils.c
OBJS		= $(SRCS:.c=.o)

# Reglas
all: libft mlx $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -L$(MLX_DIR) -lmlx42 $(MLX_FLAGS) -o $(NAME)

libft:
	@make -C $(LIBFT_DIR)

mlx:
	@make -C $(MLX_DIR)

clean:
	rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean
	@make -C $(MLX_DIR) clean

fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@make -C $(MLX_DIR) fclean

re: fclean all

.PHONY: all libft mlx clean fclean re
