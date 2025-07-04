/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:06:58 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/04 17:46:14 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

void PhoneBook::addContact()
{
	if (count < MAX)
		contacts[count++].setContactInfo();
	else
	{
		count = 0;
		contacts[count++].setContactInfo();        
	}
}

void PhoneBook::displayContacts()
{
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "NickName" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << i << "|";
		contacts[i].print_values();
	}
}

