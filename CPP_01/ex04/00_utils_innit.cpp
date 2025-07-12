/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_utils_innit.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:46:34 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/12 15:26:02 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void print_usage();
bool check_input(char **av);

void print_usage()
{
	std::cout << "\n========================================\n"
			<< "=           USAGE INSTRUCTIONS         =\n"
			<< "========================================\n"
			<< "Usage: ./replace <filename> <old> <new>\n"
			<< "Example: ./replace file.txt apple orange\n"
			<< "========================================\n\n";
}

bool check_input(char **av)
{
	for (int i = 0; i < 4; i++)
	{
		if (!av[i] || !av[i][0])
		{
			std::cout << "Empty argument detected. Try again\n";
			print_usage();
			return false;
		}
	}
	return true;
}
