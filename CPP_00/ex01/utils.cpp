/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:45:32 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/04 16:01:35 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int check_is_nbr(const std::string& number)
{
	for (size_t i = 0; i < number.length();  i++)
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);		
	}
	return (1);	
}

int check_is_alpha(const std::string& str)
{
	if (str.empty())
		return (0);
	for (size_t i = 0; i < str.length(); i++)
	{		
		if (std::isalpha(str[i]) == 0)
			return (0);		
	}
	return (1);
}
