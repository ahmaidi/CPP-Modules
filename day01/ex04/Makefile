# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 18:21:31 by ahmaidi           #+#    #+#              #
#    Updated: 2022/11/12 16:46:43 by ahmaidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
SRC = main.cpp

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








