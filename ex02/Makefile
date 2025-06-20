# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 09:48:40 by aobshatk          #+#    #+#              #
#    Updated: 2025/06/20 09:54:54 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = accoutns

$(NAME):
	$(CC) $(CFLAGS) Account.cpp tests.cpp -o $(NAME)

all: $(NAME)
clean:
	rm -f accoutns
fclean:
	rm -f accoutns
re: fclean $(NAME)
.PHONY: all clean fclean re
