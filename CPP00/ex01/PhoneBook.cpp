/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:46:13 by fcharbon          #+#    #+#             */
/*   Updated: 2024/07/19 16:34:18 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <limits>

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::welcome(void) const {
	std::cout << std::endl;
    std::cout << "📞 Welcome to Your Awesome PhoneBook 📖" << std::endl;
    std::cout << std::endl;
    std::cout << "--------------USAGE---------------" << std::endl;
    std::cout << "ADD\t: To add a contact." << std::endl;
    std::cout << "SEARCH\t: To search for a contact." << std::endl;
    std::cout << "EXIT\t: to quite the PhoneBook." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
}

void	PhoneBook::printContacts(void) const {
	std::cout << "=-=-=-=-=-=-=-= PHONEBOOK CONTACTS =-=-=-=-=-=-=-=" << std::endl;
	for (size_t i = 0; i < 8; i++) {
		this->_contacts[i].view(i);
	}
	std::cout << std::endl;
}

int		PhoneBook::_readInput() const {
	int		input = -1;
	bool	valid = false;
	do {
		std::cout << "Enter desired contact index: " << std::flush;
		std::cin >> input;
		if (std::cin.good() && (input >= 0 && input <= 8)) {
			valid = true;
		} else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid index: please re-enter." << std::endl;
		}
	} while (!valid);
	return (input);
}

void	PhoneBook::search(void) const {
	int	i = this->_readInput();
	this->_contacts[i].display(i);
}

void	PhoneBook::addContacts(void)  {
	static int i;
	this->_contacts[i % 8].init();
	this->_contacts[i % 8].setIndex(i % 8);
}
