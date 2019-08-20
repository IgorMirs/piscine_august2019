# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imirsali <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 13:03:14 by imirsali          #+#    #+#              #
#    Updated: 2019/08/19 16:29:27 by imirsali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

HEADER = ./includes/*.h

all:
	gcc -c $(SRC) -I $(HEADER)
	ar rc $(LIBRARY) *.o
	ranlib $(LIBRARY)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(LIBRARY)
	

re: fclean all
