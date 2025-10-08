/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:23:24 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/08 14:50:15 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av){
	if(ac == 1){
		std::cout<<"\033[1;34m* LOUD AND UNBEARABLE FEEDBACK NOISE *\033[0m"<<std::endl;
	}
	else{
		for(int i = 1; i < ac; i++){
			for(int j = 0; av[i][j]; j++){
				std::cout<<(char) std::toupper(av[i][j]);
			}
		}
		std::cout<<std::endl;
	}
	return(0);
}