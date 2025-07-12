/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:58:42 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/12 18:00:00 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
	{
		std::cout << "Usage: ./harlFilter <level>\n";
        return 1;		
	}
	harl.complain(av[1]);

	return 0;
}
