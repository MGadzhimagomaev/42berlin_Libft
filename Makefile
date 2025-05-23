# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgadzhim <mgadzhim@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/23 19:53:33 by mgadzhim          #+#    #+#              #
#    Updated: 2025/05/23 21:22:03 by mgadzhim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
ft_strdup.c ft_substr.c

OBJ	= $(SRC:.c=.o)

HEADER	= libft.h

.c.o:
	cc -Wall -Wextra -Werror -c $< -o $@

$(NAME): ${OBJ}
	ar rcs ${NAME} ${OBJ}

all	: $(NAME)
	
clean	:
	rm -f ${OBJ}
	
fclean	: clean
	rm -f $(NAME)

re	: fclean all