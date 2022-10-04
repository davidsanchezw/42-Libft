# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 16:31:15 by dasanch2          #+#    #+#              #
#    Updated: 2022/10/04 18:05:47 by dasanch2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIB	= ar -rcs
FILES = ft_isalpha.c \
		ft_isdigit.c \

BONUS-FILES = bonus.c \


OBJS = $(FILES:.c=.o)
BONUS-OBJS = $(BONUS-FILES:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)
bonus:
	make "OBJS=$(BONUS-OBJS)"
clean:
	rm -rf $(OBJS) $(BONUS-OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
