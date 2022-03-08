/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchromos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:47:34 by cchromos          #+#    #+#             */
/*   Updated: 2021/10/02 12:47:37 by cchromos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

PhoneBook::PhoneBook(void){

	this->count_contacts = -1;
	this->index_of_contact = -1;
	for (int i = 0; i < 8; i++){
		this->contacts[i] = Contact();
	}
}

void	PhoneBook::increase_count_contacts(void){

	if (this->count_contacts < 7){
		this->count_contacts++;
		this->index_of_contact = this->count_contacts;
	}
	else{
		if (this->index_of_contact == 7){
			this->index_of_contact = 0;
		}
		else{
			this->index_of_contact++;
		}
	}
	return ;
}

void	PhoneBook::add(void){

	std::string input;

	this->increase_count_contacts();
	std::cout << "Enter first name:" << std::endl;
	std::cin >> input;
	if (!std::cin){
			exit(0) ;
		}
	this->contacts[this->index_of_contact].set_first_name(input);
	std::cout << "Enter last name:" << std::endl;
	std::cin >> input;
	if (!std::cin){
			exit(0) ;
		}
	this->contacts[this->index_of_contact].set_last_name(input);
	std::cout << "Enter nickname:" << std::endl;
	std::cin >> input;
	if (!std::cin){
			exit(0) ;
		}
	this->contacts[this->index_of_contact].set_nickname(input);
	std::cout << "Enter phone number:" << std::endl;
	std::cin >> input;
	if (!std::cin){
			exit(0) ;
		}
	this->contacts[this->index_of_contact].set_phone_number(input);
	std::cout << "Enter darkest secret:" << std::endl;
	std::cin >> input;
	if (!std::cin){
			exit(0) ;
		}
	this->contacts[this->index_of_contact].set_darkest_secret(input);
}

void	PhoneBook::search(void){

	int i = 0;
	std::string	input;

	if (this->count_contacts < 0){
		std::cout << "No contacts yet" << std::endl;
		return ;
	}
	for (i = 0; i <= this->count_contacts; i++){
		this->contacts[i].print_search(i);
	}
	while (1){
		std::cout << "Enter a contact index:" << std::endl;
		std::cin >> input;
		if ((input >= "0") && (input < std::to_string(i))){
			this->contacts[std::stoi(input)].print_data();
			break ;
		}
		else{
			std::cout << "Wrong index." << std::endl;
		}
	}
	return ;
}

PhoneBook::~PhoneBook(void){}