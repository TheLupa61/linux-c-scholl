# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/16 14:33:41 by ccorrin           #+#    #+#              #
#    Updated: 2021/04/16 14:33:44 by ccorrin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

GCCFLAG = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c \
ft_tolower.c ft_toupper.c ft_strjoin.c ft_strtrim.c ft_split.c

SRC_B = 

HEAD = libft.h

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o)

LBAR = ar rcs

LBRAN = ranlib

all:	$(NAME)

.c.o:	
	$(CC) $(GCCFLAG) -c $< -o ${<:.c=.o}

$(NAME):	$(OBJ)
	$(LBAR) $(NAME) $(HEAD) $(OBJ)
	$(LBRAN) $(NAME)

bonus: $(NAME) $(OBJ_B)
	$(LBAR) $(NAME) $(HEAD) $(OBJ_B)
	$(LBRAN) $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean:	clean
	rm -f $(NAME) $(bonus)

re:	fclean all

.PONY: all bonus clean fclean re
