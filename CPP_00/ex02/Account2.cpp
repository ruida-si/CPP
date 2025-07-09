/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account2.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:02:31 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/09 12:48:36 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::checkAmount(void) const
{
	return this->_amount;
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;    
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}
