# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/12 09:42:16 by xadabunu          #+#    #+#              #
#    Updated: 2023/08/12 09:42:16 by xadabunu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

FILES	=	main.cpp \
			Contact.cpp \
			PhoneBook.cpp

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
