# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vicalons <vicalons@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 13:28:43 by vicalons          #+#    #+#              #
#    Updated: 2024/11/20 10:34:03 by vicalons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC		= cc
CFLAGS		= -Wall -Werror -Wextra
RM		= rm -f
AR		= ar -rcs

SUBDIR		= libft

HEADER		= ft_printf.h
SRC_FILES	= ft_printf.c \
		  printf_utils.c
OBJ_FILES	= $(SRC_FILES:.c=.o)

# Contruir el ejecutable y la libreria estatica
all: $(NAME)

# Compila los archivos del directorio actual y enlazar con el subdirectorio
$(NAME): $(OBJ_FILES)
	@$(MAKE) -C $(SUBDIR)
	@$(AR) $(NAME) $(OBJ_FILES) $(SUBDIR)/*.o

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(MAKE) -C $(SUBDIR) clean
	$(RM) $(OBJ_FILES)

fclean: clean
	@$(MAKE) -C $(SUBDIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
