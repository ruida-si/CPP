/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:35:08 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/05 16:37:30 by ruida-si         ###   ########.fr       */
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
	int total;
	
public:
	PhoneBook();
	~PhoneBook();
	void addContact();
	void displayContacts();
	void display_detail_info();
};

#endif