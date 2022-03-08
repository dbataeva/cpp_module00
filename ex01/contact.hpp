/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchromos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:25:24 by cchromos          #+#    #+#             */
/*   Updated: 2021/09/19 13:25:27 by cchromos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <stdlib.h>

class Contact{

public:

	Contact();
	~Contact(void);

	void	set_first_name(std::string first_name);
	void	set_last_name(std::string last_name);
	void	set_nickname(std::string nickname);
	void	set_phone_number(std::string number);
	void	set_darkest_secret(std::string secret);
	void	delete_data(void);
	void	print_search(int index);
	void	print_data(void);

private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	void 	print_collums(std::string str, bool end_str);
};

#endif