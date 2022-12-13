# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 00:36:50 by ahmaidi           #+#    #+#              #
#    Updated: 2022/11/10 01:34:02 by ahmaidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl_switch
SRC = main.cpp Harl.cpp 

all:$(NAME)
$(NAME):$(SRC)
	@c++  -std=c++98 $(SRC) -o $(NAME)
	@echo "\033[92mExecution file Created\033[0m"

clean:
	@rm -rf $(NAME)
	@echo "\033[91mExecution file deleted\033[0m"

fclean:
	@rm -rf $(NAME)
	@echo "\033[91mExecution file deleted\033[0m"

re: fclean all
.PHONY: all clean fclean re 