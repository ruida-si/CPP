/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_utils_replace.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:57:55 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/21 13:55:59 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

std::string create_new_file(const std::string& old_file);

bool replace_str(std::string& str, const std::string& s1, const std::string& s2)
{
	std::string	result;
	size_t		pos = 0;
	size_t		found;
	bool		replaced = false;
	
	while ((found = str.find(s1, pos)) != std::string::npos)
	{
		result += str.substr(pos, found - pos);
		result += s2;
		replaced = true;
		pos = found + s1.length();
	}
	result += str.substr(pos);
	if (!replaced)
		std::cout << "Not found. Replace did not occur\n";
	str = result;
	return replaced;
}

std::string create_new_file(const std::string& old_file)
{
	std::string new_file;
	size_t pos = old_file.rfind('.');

	if (pos != std::string::npos)
		new_file = old_file.substr(0, pos) + ".replace" + old_file.substr(pos);
	else
		new_file = old_file + ".replace";
	return new_file;
}
