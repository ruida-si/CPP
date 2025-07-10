/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:04:01 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/10 18:02:01 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_weaponB = NULL;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weaponB) {
	this->_weaponB = &weaponB;
}

void HumanB::attack() {
	if (_weaponB)
	{
		std::cout << _name << " attacks with their " << _weaponB->getType()
		<< std::endl;
	}
	else
		std::cout << _name << " has no weapon to attack with!" << std::endl;	
}

