/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:50:44 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/12 18:03:08 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Harl.h"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "[DEBUG]\nI love having extra bacon on my burger.\n\n";
}

void Harl::info(void)
{
	std::cout << "[INFO]\nAdding extra bacon costs more money.\n\n";
}

void Harl::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve some extra bacon for free.\n\n";
}

void Harl::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager!\n\n";
}

void Harl::complain(std::string level)
{
	int code = getCode(level);
	
	switch (code)	
    {
        case 0:  // DEBUG
            debug();
            // fallthrough
        case 1:  // INFO
            info();
            // fallthrough
        case 2:  // WARNING
            warning();
            // fallthrough
        case 3:  // ERROR
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}
