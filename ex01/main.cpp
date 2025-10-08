/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:34:20 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/08 17:35:04 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(){
	std::string command;
	while(1){
		std::cout << "\033[1;36mEnter a command <<<ADD, SEARCH, EXIT>>>: \033[0m";
		std::getline(std::cin, command);
		if(command == "ADD"){
			std::cout<<"add\n";
		}
		else if(command == "SEARCH"){
			std::cout<<"search\n";
		}
		else if(command == "EXIT"){
			break;
		}
	}
	return(0);
}
