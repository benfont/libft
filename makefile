# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aitlopez <aitlopez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 19:30:58 by aitlopez          #+#    #+#              #
#    Updated: 2022/09/26 17:26:16 by aitlopez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c
OBJS = ${addprefix .,${SRCS:.c=.o}}
HEADER = libft.h

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.%.o : %.c
		${CC} ${CFLAGS} -I ./ -c $< -o $@

all : ${NAME}

${NAME} : ${OBJS} ${HEADER}
		ar rcs ${NAME} ${OBJS}
		ranlib ${NAME}

bonus : ${OBJS} ${OBJSBONUS} ${HEADER}
		ar rcs ${NAME} ${OBJS} ${OBJSBONUS}
		ranlib ${NAME}
		@touch $@

clean :
		${RM} ${OBJS} ${OBJSBONUS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
