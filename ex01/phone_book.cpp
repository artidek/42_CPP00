/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:04:22 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/18 21:37:32 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int	isalldigits(std::string &prompt)
{
	for (size_t i = 0; i < prompt.size(); i++)
	{
		if (!std::isdigit(static_cast<unsigned char>(prompt[i])))
			return (0);
	}
	return (1);
}

void	search_contact(PhoneBook *pb)
{
	std::string prompt;

	while (1)
	{
		pb->display_contacts();
		std::cout << "Please type index of desired contact: ";
		std::cin >> prompt;
		if (prompt.empty())
			std::cout << "Empty fields are not allowed." <<std::endl;
		else if (!isalldigits(prompt))
			std::cout << "Only digits are allowed." << std::endl;
		else
		{
			pb->search_contact(std::atoi(prompt.c_str()));
			return;
		}
		
	}
	
}

void	add_contact(PhoneBook *pb)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (1)
	{
		std::cout << "First name: ";
		std::getline(std::cin, firstName);
		std::cout << "Last name: ";
		std::getline(std::cin, lastName);
		std::cout	<< "Nickname: ";
		std::getline(std::cin, nickname);
		if (!firstName.empty() && !lastName.empty() && !nickname.empty())
		{
			pb->add_contact(firstName, lastName, nickname);
			return;
		}
		else
			std::cout << "Empty fields are not allowed." << std::endl;
	}
}

int main(int argc, char **argv)
{
	std::string command;
	PhoneBook pb;

	(void)argv;
	if (argc > 1)
	{
		std::cout << "program doesn't accept arguments" << std::endl;
		return (0);
	}
	while(1)
	{
		std::cout << "Welcome to phonebook (ADD to add contact, SEARCH to search, EXIT to quit program): ";
		std::cin >> command;
		if (command.compare("ADD") == 0)
			add_contact(&pb);
		if (command.compare("SEARCH") == 0)
			search_contact(&pb);
		if (command.compare("EXIT") == 0)
			return (0);
	}
	return (0);
}
