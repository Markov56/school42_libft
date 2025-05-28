# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/28 14:56:58 by rmarkov           #+#    #+#              #
#    Updated: 2025/05/28 14:57:01 by rmarkov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard *.c)
SRC := $(filter-out %_bonus.c, ${SRC})

BONUS = $(wildcard *_bonus.c)

OBJS = ${SRC:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all:	${NAME}

bonus:	${OBJS} ${BONUS_OBJS}
	ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean:	clean
		${RM} ${NAME}

re:	fclean	all

.PHONY:	all bonus clean fclean re