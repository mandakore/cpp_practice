/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:25:05 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/09 15:41:04 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook() {
	index = 0;
}

std::string	PhoneBook::char_limit(const std::string& str){
	if(str.length() > 10){
		return(str.substr(0,9) + ".");
	}
	return (str);
}


std::string get_input(const std::string& prompt) {
	std::string	input;
	while (1) {
		std::cout << prompt;
		std::getline(std::cin, input);
		if (!input.empty()) {
			break;
		}
		std::cout << "Empty. Please try again." << std::endl;
	}
	return input;
}


void	PhoneBook::add_contact(){
	Contact	update;
	std::string input;

	input = get_input("Enter first name: ");
	if (std::cin.eof())
		return;
	update.set_firstname(input);

		input = get_input("Enter last name: ");
	if (std::cin.eof())
		return;
	update.set_lastname(input);

		input = get_input("Enter nickname: ");
	if (std::cin.eof())
		return;
	update.set_nickname(input);

		input = get_input("Enter phone number: ");
	if (std::cin.eof())
		return;
	update.set_phonenumber(input);
		input = get_input("Enter darkest secret: ");
	if (std::cin.eof())
		return;
	update.set_darkestsecret(input);
	this->person[this->index] = update;
	// this->index++;
	this->index++;
	if (this->index == 8) {
		this->index = 0;
	}
}




void PhoneBook::show_contact(int index) {
	if (index < 1) {
		std::cout << "Error: Invalid index." << std::endl;
		return;
	}
	Contact& c = this->person[index - 1];
	std::cout << "First Name:     " << c.get_firstname() << std::endl;
	std::cout << "Last Name:      " << c.get_lastname() << std::endl;
	std::cout << "Nickname:       " << c.get_nickname() << std::endl;
	std::cout << "Phone Number:   " << c.get_phonenumber() << std::endl;
	std::cout << "Darkest Secret: " << c.get_darkestsecret() << std::endl;
}



void	PhoneBook::search_contact(){


	show_contact(1);
}