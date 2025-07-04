/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:35:08 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/04 16:42:03 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
	static const int MAX = 8;
	Contact contacts[MAX];
	int count;

	void addContact();
	void displayContacts();
	
public:
	PhoneBook();
	~PhoneBook();
};

#endif