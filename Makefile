# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mregada- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 15:00:32 by mregada-          #+#    #+#              #
#    Updated: 2024/11/12 12:15:27 by mregada-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

NAME = libftprintf.a
HEADRS = includes
LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a

# Archivos fuente

SRCS = char_handler.c str_handler.c pointer_handler.c ft_printf.c \
	ft_puthex.c ft_putdec.c

OBJS = $(SRCS:.c=.o)

LIBFT_SRCS = $(LIBFT_DIR)/ft_isalpha.c $(LIBFT_DIR)/ft_isdigit.c \
	$(LIBFT_DIR)/ft_isalnum.c $(LIBFT_DIR)/ft_strlen.c $(LIBFT_DIR)/ft_isascii.c \
	$(LIBFT_DIR)/ft_isprint.c $(LIBFT_DIR)/ft_memset.c $(LIBFT_DIR)/ft_bzero.c \
	$(LIBFT_DIR)/ft_memcpy.c $(LIBFT_DIR)/ft_memmove.c $(LIBFT_DIR)/ft_strlcpy.c \
	$(LIBFT_DIR)/ft_strlcat.c $(LIBFT_DIR)/ft_toupper.c $(LIBFT_DIR)/ft_tolower.c \
	$(LIBFT_DIR)/ft_strchr.c $(LIBFT_DIR)/ft_strrchr.c $(LIBFT_DIR)/ft_strncmp.c \
	$(LIBFT_DIR)/ft_memchr.c $(LIBFT_DIR)/ft_memcmp.c $(LIBFT_DIR)/ft_strnstr.c \
	$(LIBFT_DIR)/ft_atoi.c $(LIBFT_DIR)/ft_calloc.c $(LIBFT_DIR)/ft_strdup.c \
	$(LIBFT_DIR)/ft_substr.c $(LIBFT_DIR)/ft_strtrim.c $(LIBFT_DIR)/ft_split.c \
	$(LIBFT_DIR)/ft_putnbr_fd.c $(LIBFT_DIR)/ft_itoa.c $(LIBFT_DIR)/ft_strmapi.c \
	$(LIBFT_DIR)/ft_striteri.c $(LIBFT_DIR)/ft_putchar_fd.c $(LIBFT_DIR)/ft_putstr_fd.c \
	$(LIBFT_DIR)/ft_putendl_fd.c $(LIBFT_DIR)/ft_strjoin.c
LIBFT_OBJS = $(LIBFT_DIR:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I $(HEADRS)

# Reglas

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	ar rc $(NAME) $(OBJS) $(LIBFT_OBS)
	ranlib $(NAME)

# compilar prueba

prueba: $(NAME) $(LIBFT) main_printf.c
	gcc $(CFLAGS) main_printf.c $(NAME) $(LIBFT) -o prueba

# compilar libft.a
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) all

# Compilar archivos de directorio

%.o: %.c $(HEADRS)/*.h
	gcc $(CFLAGS) -c $, -o $@

# Compilar libft

$(LIBFT_DIR)/%.o: $(LIBFT_DIR)/%.c $(HEADRS)/*.h
	gcc $(CFLAGS) -c $< -o $@

# Phonys

clean :
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean : clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean


re : fclean all
