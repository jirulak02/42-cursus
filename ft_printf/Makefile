# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsimecek <jsimecek@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 13:37:42 by jsimecek          #+#    #+#              #
#    Updated: 2023/05/29 12:53:29 by jsimecek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c \
	ft_putptr.c ft_puthex.c ft_putuns_i.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
INC = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f
LIBFT = ./libft/libft.a

.c.o:
	cc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INC}

${NAME}: ${OBJS}
	make -C ./libft
	cp ./libft/libft.a ${NAME}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${MAKE} clean -C ./libft
	${RM} ${OBJS}
	${RM} ${BONUS_O}

fclean:	clean
	${MAKE} fclean -C ./libft
	${RM} ${NAME}

re: fclean all
