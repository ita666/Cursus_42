NAME = pushswap.a

SRCS	= mandatory.c	Parsing.c	Sort_2_3_5.c sort_big.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJS	= ${SRCS:.c=.o}
all: $(NAME)

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		@make -C libft
##make -c de la libft 
		@cp libft/libft.a .
##copy de la libft compile dans le dossier courant
		@mv libft.a $(NAME)
##move de la libft
		@ar	rcs ${NAME} ${OBJS}



clean:		
	rm -f ${OBJS} 
	make clean -C libft


fclean:	clean
	rm -f ${NAME}
	rm -f libft/libft.a

re:			fclean all

.PHONY: all clean fclean re