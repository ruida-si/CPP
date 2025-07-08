/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:30:34 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/08 16:56:00 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

int			check_is_alpha(const std::string& str);
int			check_is_nbr(const std::string& number);
std::string	ft_trunc(const std::string& str);
int			check_input(void);

class Contact {
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
	
	void fill_name(std::string& str, const std::string& msg);
	void get_phone_nbr();

public:
	Contact();
	~Contact();
	void setContactInfo();
	void print_values();
	void display_full();
};

#endif