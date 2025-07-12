/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:51:10 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/12 17:51:37 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getCode(const std::string& level)
{
	if (level == "DEBUG")
		return 0;
	else if (level == "INFO")
		return 1;
	else if (level == "WARNING")
		return 2;
	else if (level == "ERROR")
		return 3;
	else
		return -1;  // unknown level
}
