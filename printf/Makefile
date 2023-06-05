# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 08:48:11 by cmira-am          #+#    #+#              #
#    Updated: 2023/05/17 08:18:44 by cmira-am         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_DIR = libft
LIBFT_INC = -I$(LIBFT_DIR)
LIBFT_MAKE = $(MAKE) -C $(LIBFT_DIR)

LIB_INC = -L$(LIBFT_DIR) -lft
LFLAGS = $(LIBFT_DIR)/libft.a

NAME = libftprintf.a

FILES = ft_printf.c ft_printchar.c\
ft_printhex.c ft_printnbr.c\
ft_printstr.c ft_printunsignbr.c

OBJECTS = $(FILES:.c=.o)

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER) $(LIBFT_DIR)/libft.a
	cp $(LFLAGS) $(NAME)
	ar rcs $(NAME) $(OBJECTS)

$(LIBFT_DIR)/libft.a:
	$(LIBFT_MAKE)

$(OBJECTS): $(FILES) $(HEADER)
	$(CC) $(FLAGS) $(LIBFT_INC) -c $(FILES)

clean:
	$(LIBFT_MAKE) clean
	rm -f $(OBJECTS)

fclean: clean
	$(LIBFT_MAKE) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: re all fclean clean