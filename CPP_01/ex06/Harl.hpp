/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:46:35 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/12 17:53:58 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
public:
	Harl();
	~Harl();
	
	void complain(std::string level);
	
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif