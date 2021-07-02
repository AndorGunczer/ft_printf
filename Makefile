# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agunczer <agunczer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 14:00:18 by agunczer          #+#    #+#              #
#    Updated: 2021/07/01 10:49:01 by agunczer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_detertype.c ft_printf.c ft_puthexlower_fd.c ft_puthexupper_fd.c ft_puthexpointer_fd.c ft_putunsnbr_fd.c
NAME = libftprintf.a

all: ${NAME}
	
${NAME}: ${SRC}
	gcc -c $^
	ar -rc libftprintf.a *.o

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all