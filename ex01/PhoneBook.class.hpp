/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:25:25 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/18 21:11:35 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "Contact.class.hpp"
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <sstream>

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook(void);
	void	add_contact(const std::string &firstName, const std::string &lastName, const std::string &nickname);
	void	search_contact(int index);
	void	display_contacts(void);
	
  private:
	int	_contactCount;
	Contact _contacts[9];
};

#endif
