# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarosa-b <sarosa-b@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/31 19:52:00 by sarosa-b          #+#    #+#              #
#    Updated: 2025/02/01 11:54:27 by sarosa-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -fPIE
RM 			= rm -rf

# Directorios
GNL_DIR		= get_next_line
PRINTF_DIR	= printf

# Archivos fuente de libft
LIBFT_SRCS	= ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
			  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strtrim.c \
			  ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Archivos fuente de get_next_line
GNL_SRCS	= $(GNL_DIR)/get_next_line.c $(GNL_DIR)/get_next_line_utils.c

# Archivos fuente de ft_printf
PRINTF_SRCS	= $(PRINTF_DIR)/ft_printf.c $(PRINTF_DIR)/ft_printf_text.c $(PRINTF_DIR)/ft_printf_numbers.c

# Combinar todas las listas de archivos fuente
SRCS		= $(LIBFT_SRCS) $(GNL_SRCS) $(PRINTF_SRCS)

# Generar la lista de objetos (.o)
OBJS		= $(SRCS:.c=.o)

# Regla principal
all: $(NAME)

# Compilar la biblioteca libft.a
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Regla para compilar archivos objeto (.o) en subdirectorios
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar archivos objeto
clean:
	$(RM) $(OBJS)

# Limpiar archivos objeto y la biblioteca
fclean: clean
	$(RM) $(NAME)

# Recompilar todo desde cero
re: fclean all

.PHONY: all clean fclean re
