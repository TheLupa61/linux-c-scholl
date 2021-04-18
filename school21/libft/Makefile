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

SRC = ft_strlen.c ft_atoi.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memset.c ft_memmove.c

HEAD = libft.h

OBJ = $(SRC:.c=.o)

LBAR = ar rc

LBRAN = ranlib

all:	$(NAME)

.c.o:	
	$(CC) $(GCCFLAG) -c $< -o ${<:.c=.o}

$(NAME):	$(OBJ)
	$(LBAR) $(NAME) $(HEAD) $(OBJ)
	$(LBRAN) $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PONY: all clean fclean