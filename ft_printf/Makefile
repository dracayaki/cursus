# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 16:39:04 by mmagma-g          #+#    #+#              #
#    Updated: 2022/07/18 16:42:34 by mmagma-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a


SRCS	=	

OBJS	=	${SRCS:.c=.o}

BONUS	=	

BONUS_OBJS	=	${BONUS:.c=.o}


CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all:	$(NAME)

$(NAME):	
		${CC} -c ${CFLAGS} ${SRCS} 
		ar crs ${NAME} ${OBJS}

bonus:		${OBJS} ${BONUS_OBJS}
			ar crs ${NAME} ${OBJS} ${BONUS_OBJS}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}		

fclean:		clean
				${RM} ${NAME}
		 
re:			fclean all

.PHONY: all, clean, fclean, re
							
