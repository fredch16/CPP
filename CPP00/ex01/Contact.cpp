/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:34:23 by fcharbon          #+#    #+#             */
/*   Updated: 2024/07/16 18:27:05 by fcharbon         ###   ########.fr       */
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

std::string	Contact::_printLen(std::string str) const {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::view(int index) const {
	std::cout << "=-=-=-=-=-=-=-= VIEWING CONTACT =-=-=-=-=-=-=-=" << std::endl;
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return ;
	std::cout << "|" << std::setw(10) << index << std::flush;
	std::cout << "|" << std::setw(10) << this->_printLen(this->_firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_lastName << std::flush;
	std::cout << "|" << std::endl;
} 

void	Contact::addContacts(void) {
	static int i;
	this->_contacts
}
