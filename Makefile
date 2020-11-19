# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhers <dhers@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/19 17:18:40 by dhers             #+#    #+#              #
#    Updated: 2020/11/19 17:20:13 by dhers            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_memset.c
HEADERS	=	includes
OBJS	=	${SRCS:.c=.o}
CC	=	gcc
RM	=	rm -f
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libft.a

.c.o:
		${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all
