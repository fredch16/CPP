/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:12:35 by fcharbon          #+#    #+#             */
/*   Updated: 2024/07/12 17:36:11 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			std::string arg = argv[i];
			for (size_t j = 0; j < arg.length(); ++j)
			{
				arg[j] = std::toupper(arg[j]);
			}
			std::cout << arg << " ";
		}
		std::cout << std:: endl;
	}
	else
		std::cout << "* LOUD AND UBEARABLE FEADBACK NOISE *" << std::endl;
	return (0);
	(void)argv;
}
