# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 17:15:24 by yanthoma          #+#    #+#              #
#    Updated: 2022/04/17 00:28:38 by yanthoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

SRCS	=	srcs/ft_atoi.c	srcs/ft_isalpha.c	srcs/ft_itoa.c	srcs/ft_memmove.c\
			srcs/ft_putnbr_fd.c		srcs/ft_strdup.c\
			srcs/ft_tolower.c	srcs/ft_bzero.c	srcs/ft_isascii.c	srcs/ft_memchr.c\
			srcs/ft_memset.c	srcs/ft_putstr_fd.c	srcs/ft_striteri.c	srcs/ft_strlen.c\
			srcs/ft_strrchr.c 	srcs/ft_toupper.c	srcs/ft_calloc.c	srcs/ft_isdigit.c\
			srcs/ft_memcmp.c	srcs/ft_putchar_fd.c	srcs/ft_split.c	srcs/ft_strjoin.c\
			srcs/ft_strmapi.c	srcs/ft_strtrim.c	srcs/ft_isalnum.c	srcs/ft_isprint.c\
			srcs/ft_memcpy.c	srcs/ft_putendl_fd.c	srcs/ft_strlcat.c srcs/ft_strchr.c\
			 srcs/ft_substr.c srcs/ft_strlcpy.c srcs/ft_strnstr.c srcs/ft_strncmp.c\

Bonus = Bonus/ft_lstadd_front.c	Bonus/ft_lstdelone.c	Bonus/ft_lstlast.c	Bonus/ft_lstnew.c\
Bonus/ft_lstadd_back.c	Bonus/ft_lstclear.c	Bonus/ft_lstiter.c	Bonus/ft_lstmap.c	Bonus/ft_lstsize.c\

HEADERS	= includes

OBJS	= ${SRCS:.c=.o} 

Bonus_OBJS = ${Bonus:.c=.o}

CC	= gcc

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADERS}


all:    ${NAME}

${NAME}:	${OBJS} ${Bonus_OBJS}
		ar rc ${NAME} ${OBJS} ${Bonus_OBJS}

clean:		
	rm -f ${OBJS} ${Bonus_OBJS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
