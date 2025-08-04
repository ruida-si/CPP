/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:57:42 by ruida-si          #+#    #+#             */
/*   Updated: 2025/08/04 15:11:23 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}

/*
int main()
{
	Fixed a;
	a.setRawBits(3.1434 * (1 << 8));
	std::cout << "get raw bits" << a.getRawBits() << std::endl;
}
*/