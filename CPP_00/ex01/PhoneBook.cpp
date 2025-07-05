/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:06:58 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/05 16:41:11 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook() : count(0), total(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
	int index = count % MAX;
	contacts[index].setContactInfo();
	count++;
	if (total < MAX)
		total++;
}

void PhoneBook::displayContacts()
{
	std::cout << "\n|" << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "NickName" << "|" << std::endl;
	for (int i = 0; i < total; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		contacts[i].print_values();
	}
	display_detail_info();
}

void PhoneBook::display_detail_info()
{
	std::string input;
	
	if (total > 0)
	{
		while (1)
		{
			std::cout << "\nEnter Index to see full details: ";
			std::getline (std::cin, input);
			if (input.length() == 1 && isdigit(input[0]))
			{
				int index = input[0] - '0';
				if (index >= 0 && index < total)
				{
					contacts[index].display_full();
					break ;
				}
				else
					std::cout << "Invalid index. Out of range.\n";
			}
			else
				std::cout << "Invalid Number. Try again.\n";
		}
	}
	else
		std::cout << "No contacts to display.\n";	
}

