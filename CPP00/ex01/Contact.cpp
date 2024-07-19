/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:34:23 by fcharbon          #+#    #+#             */
/*   Updated: 2024/07/19 16:24:52 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include <iomanip>

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::_getInput(std::string str) const {

	std::string input = "";
	bool		valid = false;
	do {
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else {
			std::cin.clear();
			std::cout << "Invalid input; try again." << std::endl;
		}
	} while (!valid);
	return (input);
}

void	Contact::init(void) {
	std::cin.ignore();
	this->_firstName = this->_getInput("First Name: ");
	this->_lastName = this->_getInput("Last Name: ");
	this->_nickname = this->_getInput("nickname: ");
	this->_phoneNumber = this->_getInput("Telephone Number: ");
	this->_darkestSecret = this->_getInput("Darkest Secret: ");
	std::cout << std::endl;
}

std::string	Contact::_printLen(std::string str) const {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::setIndex(int i) {
	this->_index = i;
}

void	Contact::view(int index) const {
	std::cout << "=-=-=-=-=-=-=-= VIEWING CONTACT =-=-=-=-=-=-=-=" << std::endl;
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return ;
	std::cout << "|" << std::setw(10) << index << std::flush;
	std::cout << "|" << std::setw(10) << this->_printLen(this->_firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_printLen(this->_lastName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_printLen(this->_nickname) << std::flush;
	std::cout << "|" << std::endl;
} 

void	Contact::display(int index) const {
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return ;
	std::cout << std::endl;
    std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
    std::cout << "First Name:\t" << this->_firstName << std::endl;
    std::cout << "Last Name:\t" << this->_lastName << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << std::endl;
}
