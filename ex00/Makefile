# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/17 14:07:38 by aobshatk          #+#    #+#              #
#    Updated: 2025/06/17 14:20:08 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

$(NAME): 
	$(CC) $(CFLAGS) megaphone.cpp -o $(NAME)

all: $(NAME)
clean: 
	rm -f megaphone
fclean: 
	rm -f megaphone
re: fclean $(NAME)

.PHONY: all clean fclean re
