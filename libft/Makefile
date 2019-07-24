# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clopes <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/02 14:59:15 by clopes            #+#    #+#              #
#    Updated: 2019/07/02 15:13:53 by clopes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isdigit.c ft_putchar.c ft_striter.c ft_strnew.c ft_isprint.c ft_putendl.c ft_striteri.c ft_strnstr.c ft_itoa.c ft_putstr.c ft_strjoin.c ft_strrchr.c ft_memalloc.c ft_strcat.c ft_strlcat.c ft_strsplit.c ft_memccpy.c ft_strchr.c ft_strlen.c ft_strstr.c ft_memchr.c ft_strclr.c ft_strmap.c ft_strsub.c ft_atoi.c ft_memcmp.c ft_strcmp.c ft_strmapi.c ft_strtrim.c ft_bzero.c ft_memcpy.c ft_strcpy.c ft_strncat.c ft_tolower.c ft_isalnum.c ft_memdel.c ft_strdel.c ft_strncmp.c ft_toupper.c ft_isalpha.c ft_memmove.c ft_strdup.c ft_strncpy.c ft_isascii.c ft_memset.c ft_strequ.c ft_strnequ.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_numlen.c ft_wordlen.c ft_wordcount.c

OBJ = ft_isdigit.o ft_putchar.o ft_striter.o ft_strnew.o ft_isprint.o ft_putendl.o ft_striteri.o ft_strnstr.o ft_itoa.o ft_putstr.o ft_strjoin.o ft_strrchr.o ft_memalloc.o ft_strcat.o ft_strlcat.o ft_strsplit.o ft_memccpy.o ft_strchr.o ft_strlen.o ft_strstr.o ft_memchr.o ft_strclr.o ft_strmap.o ft_strsub.o ft_atoi.o ft_memcmp.o ft_strcmp.o ft_strmapi.o ft_strtrim.o ft_bzero.o ft_memcpy.o ft_strcpy.o ft_strncat.o ft_tolower.o ft_isalnum.o ft_memdel.o ft_strdel.o ft_strncmp.o ft_toupper.o ft_isalpha.o ft_memmove.o ft_strdup.o ft_strncpy.o ft_isascii.o ft_memset.o ft_strequ.o ft_strnequ.o ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_numlen.o ft_wordlen.o ft_wordcount.o

CC = gcc

FLAGS = -Wall -Werror -Wextra

NAME = libft.a

all: $(NAME)

$(NAME):
	@$(CC) $(SRC) -c $(FLAGS)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf libft.a

re: fclean all

