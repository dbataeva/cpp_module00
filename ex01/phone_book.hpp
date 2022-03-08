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

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook{

private:

	Contact contacts[8];
	int		count_contacts;
	int		index_of_contact;
	void	increase_count_contacts(void);

public:

	PhoneBook(void);
	~PhoneBook();

	void	add(void);
	void	search(void);
};


#endif
