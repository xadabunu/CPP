# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/08 22:15:59 by xadabunu          #+#    #+#              #
#    Updated: 2023/10/08 22:15:59 by xadabunu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	test

FILES	=	main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp

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