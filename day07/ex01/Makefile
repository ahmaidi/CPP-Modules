# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 23:52:38 by ahmaidi           #+#    #+#              #
#    Updated: 2022/12/06 23:52:40 by ahmaidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=./iter
SRC= main.cpp

all: $(NAME)

$(NAME): $(SRC)
	@c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
	@echo "\033[92mExecution file Created\033[0m" 

clean:
	@rm -rf $(NAME)
	@echo "\033[91mExecution file deleted\033[0m"

fclean:
	@rm -rf $(NAME)
	@echo "\033[91mExecution file deleted\033[0m"

re: fclean all
.PHONY: all clean fclean re