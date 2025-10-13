/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:25:05 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/13 17:10:25 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

PhoneBook::PhoneBook() {
	index = 0;
	max = 0;
}

std::string	PhoneBook::char_limit(const std::string& str){
	if(str.length() > 10){
		return(str.substr(0,9) + ".");
	}
	return (std::string(10 -str.length(), ' ') + str);
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
	this->index++;
	if (this->index == 8){
		this->index = 0;
		this->max = 1;
	}
	std::cout<<"\033[1;92m* Successfully added! *\033[0m"<<std::endl;
}


void	PhoneBook::show_list(){

	int	list_count;

	if (this->max == 1)
		list_count = 8;
	else
		list_count = this->index;
	std::cout<<"┌──────────┬──────────┬──────────┬──────────┐"<<std::endl;
	std::cout<<"│       No.│First Name│ Last Name│  NickName│"<<std::endl;
	std::cout<<"├──────────┼──────────┼──────────┼──────────┤"<<std::endl;
	for (int i = 0;i < list_count; i++){
		std::cout<<"│"<<"         "<<i + 1;
		std::cout<<"│"<< char_limit(this->person[i].get_firstname());
		std::cout<<"│"<< char_limit(this->person[i].get_lastname());
		std::cout<<"│"<< char_limit(this->person[i].get_nickname())<<"│";

		std::cout<<std::endl;
		if(i < list_count -1)
			std::cout<<"├──────────┼──────────┼──────────┼──────────┤"<<std::endl;
		else
			std::cout<<"└──────────┴──────────┴──────────┴──────────┘"<<std::endl;

	}
}



void PhoneBook::show_contact(int index) {

	int	list_count;

	if (this->max == 1)
		list_count = 8;
	else
		list_count = this->index;
	if (index < 1 || index > list_count) {
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
	if (this->index == 0 && this->max == 0){
		std::cout<<"\033[31m* Error: No contact. *\033[0m"<<std::endl;
		return;
	}
	show_list();
	std::cout << "Enter the index of the contact to display: ";
	std::string input;
	std::getline(std::cin, input);


		if (std::cin.eof()) return;

	for (size_t i = 0; i < input.length(); ++i) {
		if (!isdigit(input[i])) {
			std::cout << "Error: Invalid input. Please enter a number." << std::endl;
			return;
		}
	}

	int number = atoi(input.c_str());
	show_contact(number);
}