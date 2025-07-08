/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:40:19 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/08 19:03:00 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::~Zombie() {}

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie* a = new Zombie();
	a->_name = name;
	return a;
}

void Zombie::randomChump(std::string name)
{
	Zombie b;
	b._name = name;
	b.announce();
}

void Zombie::announce(void)
{
	std::cout << _name << "e>: BraiiiiiiinnnzzzZ..." << std::endl;	
}
