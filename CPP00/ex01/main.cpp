/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:57:25 by fcharbon          #+#    #+#             */
/*   Updated: 2024/07/16 18:27:04 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <limits>
#include <iostream>

int	main(void)
{
	PhoneBook book;
	std::string input = "";
	book.welcome();
	while (input.compare("EXIT")) {
		if (input.compare("ADD") == 0)
			book.addContacts();
		else if (input.compare("SEARCH")) {
			book.printContacts();
			book.search();
		}
		std::cout << "> " << std::flush;
		std::cin >> input;
	}
	return (0);
}
