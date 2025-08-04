/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed2.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:26:21 by ruida-si          #+#    #+#             */
/*   Updated: 2025/08/04 16:05:51 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::toInt(void) const
{
	return (_fixedValue >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
	return (_fixedValue / static_cast<float>(1 << _fractionalBits));
}