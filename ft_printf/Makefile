# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 16:39:04 by mmagma-g          #+#    #+#              #
#    Updated: 2022/07/25 11:55:27 by mmagma-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a


SRCS	=	ft_printf.c ft_print_numbers.c ft_print_chars.c ft_print_hex_numbers.c \

OBJS	=	${SRCS:.c=.o}


CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all:	$(NAME)

$(NAME):	
		${CC} -c ${CFLAGS} ${SRCS} 
		ar crs ${NAME} ${OBJS}

bonus:		${OBJS}
			ar crs ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}
		 
re:			fclean all

.PHONY: all, clean, fclean, re
							
