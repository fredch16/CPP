/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:47:50 by fcharbon          #+#    #+#             */
/*   Updated: 2024/07/16 18:27:03 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
class PhoneBook
{
private:
	Contact	_contacts[8];
	int		_readInput(void) const;

public:
	PhoneBook(void);
	~PhoneBook(void);
	void	addContacts(void);
	void	printContacts(void) const;
	void	search(void) const;
	void	welcome(void) const;
};

#endif
