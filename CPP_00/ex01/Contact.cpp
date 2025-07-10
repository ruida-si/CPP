/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:01:38 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/09 18:44:17 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_phoneNumber = "";
	_darkestSecret = "";
}

Contact::~Contact() {}

void Contact::display_full()
{
	std::cout << "First Name:     " << _firstName << "\n"
			  << "Last Name:      " << _lastName << "\n"
			  << "NickName:       " << _nickName << "\n"
			  << "Phone Number:   " << _phoneNumber << "\n"
			  << "Darkest Secret: " << _darkestSecret << std::endl;
}

void Contact::print_values()
{
	std::cout << std::setw(10) << ft_trunc(_firstName) << "|"
			  << std::setw(10) << ft_trunc(_lastName) << "|"
			  << std::setw(10) << ft_trunc(_nickName) << "|" << std::endl;
}

void	Contact::setContactInfo()
{
	fill_name(_firstName, "First Name: ");
	fill_name(_lastName, "Last Name: ");
	while (1)
	{
		std::cout << "NickName: ";
		std::getline (std::cin, _nickName);
		check_input();
		if (!_nickName.empty())
			break ;
	}
	get_phone_nbr();
	while (1)
	{
		std::cout << "Darkest Secret: ";
		std::getline (std::cin, _darkestSecret);
		check_input();
		if (!_darkestSecret.empty())
			break ;
	}
}

void Contact::get_phone_nbr()
{
	while (1)
	{
		std::cout << "Phone Number: ";
		std::getline (std::cin, _phoneNumber);
		check_input();
		if (!check_is_nbr(_phoneNumber))
		{
			std::cout << "Number not valid. Try again.\n";
			_phoneNumber.clear();
		}
		if (!_phoneNumber.empty())
			break ;
	}
}

void Contact::fill_name(std::string& str, const std::string& msg)
{
	while (1)
	{
		std::cout << msg;
		std::getline (std::cin, str);
		check_input();
		if (!check_is_alpha (str))
		{
			std::cout << "Name not valid. Try again.\n";
			str.clear();
		}
		if (!str.empty())
			break ;
	}
}
