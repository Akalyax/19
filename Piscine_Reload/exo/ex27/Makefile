# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbaeyens <sbaeyens@student.19.be>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 14:02:44 by sbaeyens          #+#    #+#              #
#    Updated: 2021/08/31 14:05:48 by sbaeyens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = ft_display_file

SRC = ft_display_file.c

Flags = -Wall -Wextra -Werror

OPTIONS = -c

all: ft_display_file.o
	@${CC} ${FLAGS} ft_display_file.o -o ${NAME}

ft_display_file.o: ${SRC}
	@${CC} ${FLAGS} -c ${SRC}

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f ${NAME}
