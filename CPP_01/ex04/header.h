/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:47:30 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/12 15:38:02 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <fstream>
#include <cstdlib>

// TEMPLATE
template <typename StreamType>
void check_file(StreamType& file, const std::string& file_name)
{
	if (!file.is_open())
	{
		std::cerr << "Failed to open file: " << file_name << std::endl
				<< "Terminating the program\n";
		std::exit(EXIT_FAILURE);
	}	
}

// INPUT PARSE
void print_usage();
bool check_input(char **av);

// REPLACE FUNCTIONS
bool replace_str(std::string& str, const std::string &s1, const std::string &s2);

std::string create_new_file(const std::string& old_file);

#endif