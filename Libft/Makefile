# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mregada- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 15:00:32 by mregada-          #+#    #+#              #
#    Updated: 2024/10/11 19:53:46 by mregada-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADRS = includes
SRCS = ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c \
       ./ft_strlen.c ./ft_isascii.c ./ft_isprint.c \
       ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c \
       ./ft_memmove.c ./ft_strlcpy.c ./ft_strlcat.c \
       ./ft_toupper.c ./ft_tolower.c ./ft_strchr.c \
       ./ft_strrchr.c ./ft_strncmp.c ./ft_memchr.c \
       ./ft_memcmp.c ./ft_strnstr.c ./ft_atoi.c \
       ./ft_calloc.c ./ft_strdup.c ./ft_substr.c \
       ./ft_strtrim.c ./ft_split.c ./ft_putnbr_fd.c \
       ./ft_itoa.c ./ft_strmapi.c ./ft_striteri.c \
       ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c \
       ./ft_strjoin.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I $(HEADRS)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@
clean :
	rm -f $(OBJS)
fclean :
	rm -f $(OBJS) $(NAME)
re : fclean all
