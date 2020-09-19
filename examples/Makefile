#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciglesia <ciglesia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/02 02:03:59 by ciglesia          #+#    #+#              #
#    Updated: 2020/09/02 02:23:04 by ciglesia         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	ejecutable # Binary name
INCLUDE		=	# ./path/to/include/directorie/
SRC			=	main.c funciones.c

OBJ			=	$(SRC:.c=.o)

CFLAGS		=	-Wall -Wextra -Werror

CC			=	/usr/bin/gcc
RM			=	/bin/rm -f
ECHO		=	/bin/echo -e

%.o		:		%.c
				$(CC) $(INCLUDE) $(CFLAGS) -o $@ -c $<

$(NAME)	:		$(OBJ)
				$(CC) $(INCLUDE) $(CFLAGS) $(SRC) -o $(NAME)
				@$(ECHO) '> Compiled'

clean	:
				@($(RM) $(OBJ))
				@$(ECHO) '> Directory cleaned'

all		:		$(NAME)

fclean	:		clean
				@$(RM) $(NAME)
				@$(ECHO) '> Remove executable'

re		:		fclean all
