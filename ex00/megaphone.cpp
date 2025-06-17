/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:28:15 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/17 17:41:03 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

int	only_spaces(std::string &text)
{
	for (size_t i = 0; i < text.size(); i++)
	{
		if (text[i] != ' ')
			return (0);
	}
	return (1);
}

void	upper_text(std::string &text)
{
	for (size_t i = 0; i < text.size(); i++)
		text[i] = std::toupper(static_cast<unsigned char>(text[i]));
}

void	loud_noise()
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

int	main(int argc, char **argv)
{
	std::string text;
	if (argc == 1)
	{
		loud_noise();
		return (0);
	}
	text = argv[1];
	for (int i = 2; i < argc; i++)
	{
		text += ' ';
		text += argv[i];
	}
	if (text.empty() || only_spaces(text))
	{
		loud_noise();
		return (0);
	}
	upper_text(text);
	std::cout << text << std::endl;
	return (0);
}
