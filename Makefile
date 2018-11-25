# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shamidan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/14 09:44:46 by shamidan          #+#    #+#              #
#    Updated: 2018/11/20 12:01:33 by shamidan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c

all: 
	gcc  -Wall -Wextra -Werror -c $(SRC)
	gcc  -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean: 
	/bin/rm -f *.o

fclean: clean  
	/bin/rm -f $(NAME)
