/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchromos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:46:52 by cchromos          #+#    #+#             */
/*   Updated: 2021/10/02 12:46:54 by cchromos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::set_first_name(std::string first_name){
	this->_first_name = first_name;
	return ;
}

void	Contact::set_last_name(std::string last_name){
	this->_last_name = last_name;
	return ;
}

void	Contact::set_nickname(std::string nickname){
	this->_nickname = nickname;
	return ;
}

void	Contact::set_phone_number(std::string number){
	this->_phone_number = number;
	return ;
}

void	Contact::set_darkest_secret(std::string secret){
	this->_darkest_secret = secret;
	return ;
}

void	Contact::delete_data(void){
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
	return ;
}

void	Contact::print_data(void){
	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phone_number << std::endl;
	std::cout << this->_darkest_secret << std::endl;
	return ;
}

void	Contact::print_collums(std::string str, bool end_str){
	int j;
	for (j = 0; str[j] && (j < 8); j++){
		std::cout << str[j];
	}
	if ((j == 8) && (str.length() == 9)) {
		std::cout << str[j];
		++j;
	}
	if ((j == 8) && str[j])
	{
		std::cout << ".";
		j++;
	}
	for (int i = j; i < 9; i++)
		std::cout << " ";
	if (!end_str)
		std::cout << "|";
	else
		std::cout << "\n";
	return ;
}

void	Contact::print_search(int index){
	std::cout << index << "         |";
	print_collums(this->_first_name, 0);
	print_collums(this->_last_name, 0);
	print_collums(this->_nickname, 1);
	return ;
}

Contact::Contact(void){		
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

Contact::~Contact(void){}