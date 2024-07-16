/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:46:13 by fcharbon          #+#    #+#             */
/*   Updated: 2024/07/16 18:27:03 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

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

	std::cout << "Consider the contacts printed" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::search(void) const {
	std::cout << std::endl;
	std::cout << "Consider the contact searched" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::addContacts(void)  {
	std::cout << std::endl;
	std::cout << "Consider the contact searched" << std::endl;
	std::cout << std::endl;
}
