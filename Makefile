# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vicalons <vicalons@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 13:28:43 by vicalons          #+#    #+#              #
#    Updated: 2024/11/15 13:45:54 by vicalons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC		= cc
CFLAGS		= -Wall -Werror -Wextra
RM		= rm -f
AR		= ar -rcs
CP		= cp
LIB_PATH 	= ./libft
LIBFT		= $(LIB_PATH)/libft.a

HEADER	= ft_printf.h
SRC	= ft_printf.c
OBJ 	= $(SRC: .c=.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	$(CP) libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) -I ./ $< -o $@

clean:
	$(RM) $(OBJ)
	make -C $(LIB_PATH) clean

fclean: clean
	make -C $(LIB_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
