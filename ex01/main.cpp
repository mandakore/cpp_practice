/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:34:20 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/09 14:31:08 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main(){
	PhoneBook	phonebook;
	std::string command;
	while(1){
		std::cout << "\033[1;36mEnter a command <<<ADD, SEARCH, EXIT>>>: \033[0m";
		std::getline(std::cin, command);
		if(command == "ADD"){
			phonebook.add_contact();
		}
		else if(command == "SEARCH"){
			phonebook.search_contact();
		}
		else if(command == "EXIT"){
			break;
		}
	}
	return(0);
}
