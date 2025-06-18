/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:17:12 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/18 22:38:07 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook() : _contactCount(0)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(const std::string &firstName,
	const std::string &lastName, const std::string &nickname)
{
	if (this->_contactCount < 8)
	{
		this->_contacts[this->_contactCount].setfn(firstName);
		this->_contacts[this->_contactCount].setln(lastName);
		this->_contacts[this->_contactCount].setnn(nickname);
		this->_contactCount += 1;
	}
	else
	{
		this->_contacts[7].setfn(firstName);
		this->_contacts[7].setln(lastName);
		this->_contacts[7].setnn(nickname);
	}
}

void PhoneBook::search_contact(int index)
{
	if (index < 1 || index > 8)
	{
		std::cout << "Index out of range" << std::endl;
		return;
	}
	std::string fn = _contacts[index - 1].getfn();
	std::string ln = _contacts[index - 1].getln();
	std::string nn = _contacts[index -1].getnn();
	if (nn.empty() && fn.empty() && ln.empty())
	{
		std::cout << "There is no data on requested index" << std::endl;
		return;
	}
	std::cout << "First name: " << fn << std::endl;
	std::cout << "Last name: " << ln << std::endl;
	std::cout << "Nickname: " << nn << std::endl;
}

void	PhoneBook::display_contacts(void)
{
	int	i = 0;
	std::string fnComp;
	std::string lnComp;
	std::string nnComp;

	while (i < _contactCount)
	{
		fnComp = this->_contacts[i].getfn();
		lnComp = this->_contacts[i].getln();
		nnComp = this->_contacts[i].getnn();
		std::ostringstream oss;
		oss << i + 1;
		std:: string str_ind = oss.str();
		std::cout << std::right << str_ind  << ' ';
		if (fnComp.size() > 10)
			std::cout << std::right << std::setw(10) << fnComp.substr(0, 10)<< std::setw(1) << "."<< std::setw(1) << "|";
		else
			std::cout << std::right << std::setw(10) << fnComp << std::setw(2) << "|";
		if (lnComp.size() > 10)
			std::cout << std::right << std::setw(10) << lnComp.substr(0, 10) << std::setw(1) << "." << std::setw(1) << "|";
		else
			std::cout << std::right << std::setw(10) << lnComp << std::setw(2) << "|";
		if (nnComp.size() > 10)
			std::cout << std::right << std::setw(10) << nnComp.substr(0, 10) << std::setw(1) << "." << std::endl;
		else
			std::cout << std::right << std::setw(10) << nnComp << std::endl;
		i++;
	}
	if (i == 0)
		std::cout << "There are no contacts yet." << std::endl;
}
