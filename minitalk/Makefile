# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 18:09:23 by mmagma-g          #+#    #+#              #
#    Updated: 2022/11/17 19:08:43 by mmagma-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	minitalk
SVR		=	server
CLT		=	client
LIBFT	=	./libft/libft.a 
CFLAGS	=	-Wall -Werror -Wextra
SCR_SVR =	server.c
SCR_CLT =	client.c
SVROBJS	=	$(SCR_SVR:.c=.o)
CLTOBJS	=	$(SCR_CLT:.c=.o)


all:	$(LIBFT) $(SVR) $(CLT) 


$(LIBFT):
		@make -C ./libft
		@echo "Compiling libftecito"


$(SVR): $(SVROBJS)
		@gcc $(CFLAGS) $(SVROBJS) -Llibft -lft -o server
		@echo "Compiling servero"


$(CLT):	$(CLTOBJS)
		@gcc $(CFLAGS) $(CLTOBJS) -Llibft -lft -o client
		@echo "Compiling cliento"


clean:
	rm -rf $(SVROBJS) $(CLTOBJS)


fclean: clean
	rm -rf $(SVR) $(CLT)


re:	fclean all


.PHONY: clean fclean re all
