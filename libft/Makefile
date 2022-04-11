# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 17:15:24 by yanthoma          #+#    #+#              #
#    Updated: 2022/04/11 23:50:26 by yanthoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

SRCS	= srcs/*.c

HEADERS	= includes

OBJS	= ${SRCS:.c=.o}

CC	= gcc

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADERS}


all:    ${NAME}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

clean:		
	rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
