# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 00:39:35 by mhaddaou          #+#    #+#              #
#    Updated: 2022/03/12 20:54:04 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: fclean
	@cd library && make all
	@gcc src/*.c library/library.a -o push_swap 

clean:
	@cd library && make clean
	@rm -f push_swap

fclean: clean
	@cd library && make fclean

re:all

