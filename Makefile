# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/24 15:47:15 by vtenigin          #+#    #+#              #
#    Updated: 2016/10/04 21:28:45 by vtenigin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRC = ./
PATH_OBJ = ./

CC = gcc
CFLAGS = -Wall -Wextra -Werror

# ft_iswhitespace
# ft_strrev
# ft_itoa_base
# ft_atol
# ft_strtoupper
# ft_strtolower
# ft_strrepchr

SRC = 	$(PATH_SRC)ft_strlen.c \
		$(PATH_SRC)ft_strdup.c \
		$(PATH_SRC)ft_strcpy.c\
		$(PATH_SRC)ft_strncpy.c \
		$(PATH_SRC)ft_strcat.c \
		$(PATH_SRC)ft_strncat.c \
		$(PATH_SRC)ft_strlcat.c \
		$(PATH_SRC)ft_strchr.c \
		$(PATH_SRC)ft_strrchr.c\
		$(PATH_SRC)ft_isalpha.c \
		$(PATH_SRC)ft_isdigit.c \
		$(PATH_SRC)ft_isalnum.c\
		$(PATH_SRC)ft_isascii.c \
		$(PATH_SRC)ft_isprint.c \
		$(PATH_SRC)ft_toupper.c \
		$(PATH_SRC)ft_tolower.c \
		$(PATH_SRC)ft_strstr.c \
		$(PATH_SRC)ft_strnstr.c \
		$(PATH_SRC)ft_bzero.c \
		$(PATH_SRC)ft_memcpy.c \
		$(PATH_SRC)ft_memccpy.c\
		$(PATH_SRC)ft_memmove.c \
		$(PATH_SRC)ft_memchr.c \
		$(PATH_SRC)ft_memcmp.c \
		$(PATH_SRC)ft_memset.c \
		$(PATH_SRC)ft_memdel.c \
		$(PATH_SRC)ft_memalloc.c \
		$(PATH_SRC)ft_strcmp.c \
		$(PATH_SRC)ft_strncmp.c \
		$(PATH_SRC)ft_strnew.c \
		$(PATH_SRC)ft_strdel.c \
		$(PATH_SRC)ft_strclr.c \
		$(PATH_SRC)ft_striter.c \
		$(PATH_SRC)ft_striteri.c \
		$(PATH_SRC)ft_strmap.c \
		$(PATH_SRC)ft_strmapi.c \
		$(PATH_SRC)ft_strequ.c \
		$(PATH_SRC)ft_strnequ.c \
		$(PATH_SRC)ft_strsub.c \
		$(PATH_SRC)ft_strjoin.c \
		$(PATH_SRC)ft_strtrim.c \
		$(PATH_SRC)ft_strsplit.c \
		$(PATH_SRC)ft_strrev.c \
		$(PATH_SRC)ft_strtolower.c \
		$(PATH_SRC)ft_strtoupper.c \
		$(PATH_SRC)ft_strrepchr.c \
		$(PATH_SRC)ft_putchar.c \
		$(PATH_SRC)ft_putstr.c \
		$(PATH_SRC)ft_putendl.c \
		$(PATH_SRC)ft_putnbr.c \
		$(PATH_SRC)ft_putchar_fd.c \
		$(PATH_SRC)ft_putstr_fd.c \
		$(PATH_SRC)ft_putendl_fd.c \
		$(PATH_SRC)ft_putnbr_fd.c \
		$(PATH_SRC)ft_iswhitespace.c \
		$(PATH_SRC)ft_itoa.c \
		$(PATH_SRC)ft_itoa_base.c \
		$(PATH_SRC)ft_lstnew.c \
		$(PATH_SRC)ft_lstdelone.c \
		$(PATH_SRC)ft_lstdel.c \
		$(PATH_SRC)ft_lstadd.c \
		$(PATH_SRC)ft_lstiter.c \
		$(PATH_SRC)ft_lstmap.c \
		$(PATH_SRC)ft_atol.c \
		$(PATH_SRC)ft_atoi.c

OBJ = $(patsubst %.c,%.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all