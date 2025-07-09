/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:27:36 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/09 14:13:41 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "Creating a heap zombie:\n";
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();

	std::cout << "\nCreating a stack zombie:\n";
	randomChump("StackZombie");

	std::cout << "\nDeleting heap zombie:\n";
	delete heapZombie;

	std::cout << "\nEnd of main\n";
	return (0);
}
