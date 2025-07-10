/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:28:13 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/10 18:46:48 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (!av[2][0] || !av[3][0])
		   std::cout << "Void input. Try again\n";
		std::ifstream file(av[1]);
		if (!file.is_open())
		{
			std::cerr << "Failed to open file\n";
			return (1);
		}
		file.close();
	}
	else
		std::cout << "Usage: ./replace <filename> <s1> <s2>\n";

	return (0);
}
