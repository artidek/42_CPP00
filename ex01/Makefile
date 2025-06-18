# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/18 20:48:28 by aobshatk          #+#    #+#              #
#    Updated: 2025/06/18 21:00:58 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = phonebook

$(NAME):
		$(CC) $(CFLAGS) PhoneBook.class.cpp Contact.class.cpp phone_book.cpp -o $(NAME)

all: $(NAME)
clean:
	rm -f phonebook
fclean:
	rm -f phonebook
re: fclean $(NAME)
.PHONY: all clean fclean re
