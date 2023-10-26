# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 12:14:09 by xadabunu          #+#    #+#              #
#    Updated: 2023/10/26 12:14:09 by xadabunu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	prog

FILES	=	main.cpp \
			Harl.cpp

OBJS	=	${FILES:.cpp=.o}

RM		=	rm -rf

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

${NAME}	:	${OBJS}
			${CC} ${FLAGS} ${OBJS} -o ${NAME}

all		:	${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all

.PHONY	:	all clean fclean re
