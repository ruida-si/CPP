/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_utils_replace.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:57:55 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/12 15:44:04 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

std::string create_new_file(const std::string& old_file);

bool replace_str(std::string& str, const std::string &s1, const std::string &s2)
{
	size_t	pos = 0;
	bool	replaced = false;
	
	while ((pos = str.find(s1, pos)) != std::string::npos)
	{
		str.replace(pos, s1.length(), s2);
		pos += s2.length();
		replaced = true;
	}
	if (!replaced)
		std::cout << "Not found. Replace did not occur\n";
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
