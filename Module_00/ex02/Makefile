# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 10:55:37 by xadabunu          #+#    #+#              #
#    Updated: 2023/09/07 11:07:48 by xadabunu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	dreamjob

FILES	=	Account.cpp \
			tests.cpp

OBJS	=	${FILES:.cpp=.o}

RM		=	rm -rf

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror #-std=c++98

${NAME}	:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all		:	${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all

.PHONY	:	all clean fclean re
