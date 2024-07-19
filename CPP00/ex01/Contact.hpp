/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:35:23 by fcharbon          #+#    #+#             */
/*   Updated: 2024/07/19 15:55:03 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
class Contact
{
private:
	std::string _firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string _phoneNumber;
	std::string	_darkestSecret;
	int			_index;

	std::string	_printLen(std::string str) const;
	std::string _getInput(std::string str) const;

public:
	Contact(void);
	~Contact(void);
	void	display(int	index) const;
	void	view(int index) const;
	void	init(void);
	void	setIndex(int i);
};

#endif
