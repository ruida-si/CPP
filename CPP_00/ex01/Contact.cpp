/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:01:38 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/04 17:45:18 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

Contact::Contact()
{
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
}

Contact::~Contact() {}

void Contact::print_values()
{
	std::cout << std::setw(10) << firstName << "|"
			  << std::setw(10) << lastName << "|"
			  << std::setw(10) << nickName << std::endl;
}

void	Contact::setContactInfo()
{
	fill_name(firstName, "First Name: ");
	fill_name(lastName, "Last Name: ");
	while (nickName.empty())
	{
		std::cout << "NickName: ";
		std::getline (std::cin, nickName);
	}
	get_phone_nbr();	
	while (darkestSecret.empty())
	{
		std::cout << "Darkest Secret: ";
		std::getline (std::cin, darkestSecret);
	}
}

void Contact::get_phone_nbr()
{
	while (phoneNumber.empty())
	{
		std::cout << "Phone Number: ";
		std::getline (std::cin, phoneNumber);
		if (!check_is_nbr(phoneNumber))
		{
			std::cout << "Number not valid. Try again.\n";
			phoneNumber.clear();
		}
	}
}

void Contact::fill_name(std::string& str, const std::string& msg)
{
	while (str.empty())
	{
		std::cout << msg;
		std::getline (std::cin, str);
		if (!check_is_alpha (str))
		{
			std::cout << "Name not valid. Try again.\n";
			str.clear();
		}
	}
}
