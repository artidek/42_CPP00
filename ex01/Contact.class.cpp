/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:06:19 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/18 14:01:38 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{

}

Contact:: ~Contact()
{

}

std::string Contact::getfn(void)
{
	return this->_firstName;
}

std::string Contact::getln(void)
{
	return this->_lastName;
}

std::string Contact::getnn(void)
{
	return this->_nickname;
}

void	Contact::setfn(const std::string &firstName)
{
	this->_firstName = firstName;
}

void	Contact::setln(const std::string &lastName)
{
	this->_lastName = lastName;
}

void	Contact::setnn(const std::string &nickname)
{
	this->_nickname = nickname;
}
