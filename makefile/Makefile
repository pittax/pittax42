# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 19:45:29 by gpittalu          #+#    #+#              #
#    Updated: 2022/05/25 19:12:07 by gpittalu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables para los archivos fuente
x		= main.c alfa.c bravo.c

# sustituye .c por .o en la variable x
y		= ${x:.c=.o}

# nombre del ejecutable
z		= master

CC		= cc
RM		= rm -f
CFLAGS	= -Wall -g

# instruccion oculta de make para crear los .o
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# instruccion principal
${z}:	${y}
		${CC} -o ${z} ${y}

charlie:
		echo charlie

all:	${z}

# elimina los archivos .o
clean:
		${RM} ${y}

# ejecuta 'clean' y elimina el ejecutable
fclean:	clean
		${RM} ${z}

# para borrar todo y compilar de nuevo
re:		fclean all

# para no confundir las variables con los archivos
# ingnora los archivos con estos nombres
.PHONY:	all clean fclean re
