/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:01:38 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/05 16:50:03 by ruida-si         ###   ########.fr       */
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

void Contact::display_full()
{
	std::cout << "First Name:     " << firstName << "\n"
			  << "Last Name:      " << lastName << "\n"
			  << "NickName:       " << nickName << "\n"
			  << "Phone Number:   " << phoneNumber << "\n"
			  << "Darkest Secret: " << darkestSecret << std::endl;	
}

void Contact::print_values()
{
	std::cout << std::setw(10) << ft_trunc(firstName) << "|"
			  << std::setw(10) << ft_trunc(lastName) << "|"
			  << std::setw(10) << ft_trunc(nickName) << "|" << std::endl;
}

void	Contact::setContactInfo()
{
	fill_name(firstName, "First Name: ");
	fill_name(lastName, "Last Name: ");
	while (1)
	{
		std::cout << "NickName: ";
		std::getline (std::cin, nickName);
		if (!nickName.empty())
			break ;
	}
	get_phone_nbr();	
	while (1)
	{
		std::cout << "Darkest Secret: ";
		std::getline (std::cin, darkestSecret);
		if (!darkestSecret.empty())
			break ;
	}
}

void Contact::get_phone_nbr()
{
	while (1)
	{
		std::cout << "Phone Number: ";
		std::getline (std::cin, phoneNumber);
		if (!check_is_nbr(phoneNumber))
		{
			std::cout << "Number not valid. Try again.\n";
			phoneNumber.clear();
		}
		if (!phoneNumber.empty())
			break ;
	}
}

void Contact::fill_name(std::string& str, const std::string& msg)
{
	while (1)
	{
		std::cout << msg;
		std::getline (std::cin, str);
		if (!check_is_alpha (str))
		{
			std::cout << "Name not valid. Try again.\n";
			str.clear();
		}
		if (!str.empty())
			break ;
	}
}
