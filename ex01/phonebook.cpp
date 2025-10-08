/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:25:05 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/08 19:51:32 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>

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
		if (std::cin.eof()) {
			return "";
		}
		if (!input.empty()) {
			break;
		}
		std::cout << "Field cannot be empty. Please try again." << std::endl;
	}
	return input;
}


void	PhoneBook::add_contact(){
	Contact	update;
	std::string input;

	input = get_input("Enter first name: ");
	if (std::cin.eof()){
		return;
	update.set_firstname(input);
	}

		input = get_input("Enter last name: ");
	if (std::cin.eof()){
		return;
	update.set_lastname(input);
	}

		input = get_input("Enter nickname: ");
	if (std::cin.eof()){
		return;
	update.set_nickname(input);
	}

		input = get_input("Enter phone number: ");
	if (std::cin.eof()){
		return;
	update.set_phonenumber(input);
	}

		input = get_input("Enter darkest secret: ");
	if (std::cin.eof()){
		return;
	update.set_darkestsecret(input);
	}

}