/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:28:13 by ruida-si          #+#    #+#             */
/*   Updated: 2025/07/12 15:38:56 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (!check_input(av))
			return (1);

		std::ifstream in_file(av[1]);
		check_file(in_file, av[1]);
		
		std::string content((std::istreambuf_iterator<char>(in_file)),
					 std::istreambuf_iterator<char>());
		in_file.close();
		
		std::string new_file = create_new_file(av[1]);
		std::ofstream out_file(new_file.c_str());
		check_file(out_file, av[1]);
		bool check = replace_str(content, av[2], av[3]);
		out_file << content;
		out_file.close();
		if (check)
		{
			std::cout << "Substitution completed successfully. Output saved to "
					<< new_file << std::endl;
		}
	}
	else
		print_usage();
	return (0);
}
