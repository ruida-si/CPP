/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:35:53 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/09 18:01:17 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

class Zombie {
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce() const;
	void setName(std::string name);
	
private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
