# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jternero <jternero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 16:55:59 by jternero          #+#    #+#              #
#    Updated: 2022/10/30 20:06:35 by jternero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		= libftprintf.a
CC			= 	gcc
AR 			= 	ar -rcs
CFLAGS		= 	-Werror -Wall -Wextra
RM			= 	rm -f

SRCS 		= 	ft_printf.c		 \
				ft_putchar.c	 \
				ft_putstr.c		 \
				ft_putnbr.c		 \
				ft_putuint.c	 \
				ft_puthexnbr.c   \
				
				
OBJS		= ${SRCS:.c=.o}

${NAME}	:	${OBJS}
		${AR} ${NAME} ${OBJS}


all: ${NAME}

clean	:
		${RM} ${OBJS}
fclean	:	clean
		${RM} ${NAME}
re		: fclean all

.PHONY	: clean fclean .c.o