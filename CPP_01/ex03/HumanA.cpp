/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:04:01 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/10 17:50:57 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponA)
	: _name(name), _weaponA(weaponA)
{	
}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << _name << " attacks with their " << _weaponA.getType()
	<< std::endl;
}

