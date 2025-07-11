/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:46:34 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/11 15:00:22 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void check_file(std::ifstream& file, const std::string& file_name)
{
	if (!file.is_open())
	{
		std::cerr << "Failed to open file: " << file_name << std::endl
				<< "Terminating the program\n";
		std::exit(1);
	}	
}
