/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:50:44 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/12 17:29:47 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "[DEBUG] I love having extra bacon on my burger.\n";
}

void Harl::info(void)
{
	std::cout << "[INFO] Adding extra bacon costs more money.\n";
}

void Harl::warning(void)
{
	std::cout << "[WARNING] I think I deserve some extra bacon for free.\n";
}

void Harl::error(void)
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager!\n";
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*FuncPtr)();
	
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	FuncPtr functions[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "Try one of the following levels: DEBUG, INFO, WARNING, "
			<< "ERROR" << std::endl;
}
