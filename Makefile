# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 17:59:10 by gantonio          #+#    #+#              #
#    Updated: 2021/06/03 16:35:35 by gantonio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS =	-Wall -Wextra -Werror

INC_DIR = includes
SRC_DIR = sources
CC =	gcc
NAME =	libft.a

SRC_FILES =	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_islower.c \
			ft_isprint.c \
			ft_isupper.c \
			ft_itoa.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstdelone.c \
			ft_lstlast.c \
			ft_lstsize.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim2.c \
			ft_tolower.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c 

SRCS = $(addprefix $(SRC_DIR)/,$(SRC_FILES))

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(NAME) created"

%.o: %.c
	@gcc $(FLAGS) -I $(INC_DIR) -c $< -o $@
	@echo "$@ created from $<"

clean:
	@rm -f $(OBJS)
	@echo "OBJECTS deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY = all clean fclean re