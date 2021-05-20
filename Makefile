# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 17:59:10 by gantonio          #+#    #+#              #
#    Updated: 2021/05/20 18:14:17 by gantonio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS =	-Wall -Wextra -Werror
CC =	gcc
NAME =	libft.a

SRC_FILES =	ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_islower.c \
			ft_isprint.c \
			ft_isupper.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c 

			

OBJS = $(src/SRC_FILES:.c=.o)

all:	$(NAME)

clean:
	@rm -f $(OBJS)
	@echo "OBJECTS deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all