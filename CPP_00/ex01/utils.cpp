/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:45:32 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/08 17:02:56 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int check_input()
{
	if (std::cin.eof() || std::cin.fail())
	{
		std::cin.clear();
		std::cerr << "Input error or EOF detected. Exiting...\n";		
		std::exit(1);
	}
	return 0;
}

int check_is_nbr(const std::string& number)
{
	for (size_t i = 0; i < number.length();  i++)
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);		
	}
	return (1);	
}

int check_is_alpha(const std::string& str)
{
	if (str.empty())
		return (0);
	for (size_t i = 0; i < str.length(); i++)
	{		
		if (std::isalpha(str[i]) == 0)
			return (0);
	}
	return (1);
}

std::string ft_trunc(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}
