/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:44:31 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/10 15:14:07 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int main()
{
	std::string msg = "HI THIS IS BRAIN";
	std::string* stringPTR = &msg;
	std::string& stringREF = msg;
	
	std::cout << std::left;
	std::cout << std::setw(25) << "Memory address string " << &msg << "\n"
			<< "Memory address stringPTR " << stringPTR << "\n"
			<< "Memory address stringRef " << &stringREF << std::endl;
	
	std::cout << "\n\n"
			<< std::setw(19) << "Value of string " << msg << "\n"
			<< "Value of stringPTR " << *stringPTR << "\n"
			<< "Value of stringREF " << stringREF << std::endl;
}
