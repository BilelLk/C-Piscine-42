# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blakehal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 19:24:53 by blakehal          #+#    #+#              #
#    Updated: 2022/09/22 19:03:07 by blakehal         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #
NAME 	= libft.a

SRC 	= srcs/

SRCS 	= ${SRC}ft_putchar.c ${SRC}ft_swap.c ${SRC}ft_putstr.c ${SRC}ft_strlen.c ${SRC}ft_strcmp.c

OBJS 	= ${SRCS:.c=.o}

HEAD	= includes

CFLAGS 	= -Wall -Wextra -Werror

GCC 	= gcc

RM		= rm -f

AR		= ar rc

RAN		= ranlib
.c.o:
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

all : 		${NAME}

${NAME} :	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RAN} ${NAME}

clean:
			${RM} ${OBJS}

fclean :	clean
			${RM} ${NAME}

re : 		fclean all

.PHONY:		all clean fclean re
			
		
