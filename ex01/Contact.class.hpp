/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:28:13 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/18 14:02:18 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact
{
  public:
	Contact(void);
	~Contact(void);
	std::string getfn(void);
	std::string getln(void);
	std::string getnn(void);
	void	setfn(const std::string &firstName);
	void	setln(const std::string &lastName);
	void	setnn(const std::string &_nickname);

  private:
	std::string	_firstName;
	std::string	_lastName;
	std::string _nickname;
};

#endif
