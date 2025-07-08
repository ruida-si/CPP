/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:25:50 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/08 16:40:07 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	cmd;

	std::cout << "\n☎️ Welcome to your PhoneBook!\n\n"
			  << "Available commands: ADD, SEARCH, EXIT\n";
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, cmd);
		check_input();
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.displayContacts();
		else if (cmd == "EXIT")
		{
			std::cout << "Goodbye!\n";
			break ;
		}
		else
			std::cout << "Invalid command. Please use ADD, SEARCH, or EXIT.\n";
	}
	return (0);
}
