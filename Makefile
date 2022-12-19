# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 10:18:21 by ichouare          #+#    #+#              #
#    Updated: 2022/11/13 10:18:25 by ichouare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
RM = rm -f
AR = ar rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = ft_printf.h

SRC = ft_printf.c ft_printf_ns.c ft_printf_nu.c ft_putchar.c ft_putstr.c   ft_printf_p.c 
OBJ = $(SRC:.c=.o)


all: $(NAME) 

$(NAME): $(OBJ) 
	$(AR) $@ $(OBJ)
		

%.o:%.c $(HEADER)
	$(CC)  -c $< $(CFLAGS)

clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re : fclean all 