# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allharut <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 13:18:26 by allharut          #+#    #+#              #
#    Updated: 2024/04/26 13:18:28 by allharut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
COMANDO		= ar
SRC			= ft_printf.c hexadecimal.c ft_print_int.c ft_print_str.c\
			ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_printf_ptr.c
OBJS		= $(SRC:.c=.o)
CC			= gcc
INCDIR		= .
CFLAGS		= -Wall -Wextra -Werror -I$(INCDIR)
all				: $(NAME)
$(NAME)	: $(OBJS)
	$(COMANDO) rcs $(NAME) $(OBJS)
%.o				: %.c
	$(CC) -c $(CFLAGS) $< -o $@
clean			:
	@rm -f *.o
fclean			: clean
	@rm -f $(NAME)
re				: fclean all
.PHONY: all clean fclean re
