/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:58:16 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/09 17:46:10 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 3;
	Zombie* horde = zombieHorde(n, "zombie");
	
	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
