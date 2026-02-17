# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mosafa <mosafa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/18 07:39:05 by mosafa            #+#    #+#              #
#    Updated: 2025/11/18 07:39:06 by mosafa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c helper.c helper1.c
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME} : ${OBJS}
		ar rcs ${NAME} ${OBJS}

all : ${NAME}

clean:
	rm -f ${OBJS}
fclean:	clean
	rm -f ${NAME}
re: fclean all
.PHONY :all clean fclean re
