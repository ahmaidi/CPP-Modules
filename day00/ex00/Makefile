# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 16:02:40 by ahmaidi           #+#    #+#              #
#    Updated: 2022/11/17 15:54:41 by ahmaidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = ./megaphone.cpp

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