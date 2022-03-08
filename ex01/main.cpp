/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchromos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:25:15 by cchromos          #+#    #+#             */
/*   Updated: 2021/09/19 13:25:18 by cchromos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"
#include "contact.hpp"
#include <cstring>

int	main(void)
{
	PhoneBook	book;
	char		input[7];
	std::string exit("EXIT");
	std::string search("SEARCH");
	std::string add("ADD");

	while (1)
	{
		std::cout << "Enter a command:" << std::endl;
		std::cin >> input;
		if (!std::cin){
			break ;
		}
		if (!exit.compare(input))
			break;
		else if (!search.compare(input)){
			book.search();
			continue ;
		}
		else if (!add.compare(input)){
			book.add();
			continue ;
		}
		else
			std::cout << "Wrong command" << std::endl;
	}
	return 0;
}
