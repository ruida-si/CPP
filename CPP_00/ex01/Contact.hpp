/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:30:34 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/04 16:01:24 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

int check_is_alpha(const std::string& str);
int check_is_nbr(const std::string& number);

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	
	void fill_name(std::string& str, const std::string& msg);
	void get_phone_nbr();

public:
	Contact();
	void setContactInfo();
};

#endif