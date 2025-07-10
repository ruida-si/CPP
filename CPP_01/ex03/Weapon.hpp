/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:51:14 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/10 18:04:52 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	
	const std::string& getType() const;
	void setType(std::string type);
	
private:
	std::string _type;
};

#endif