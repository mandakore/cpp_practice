/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:23:24 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/08 14:38:29 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av){
	if(ac == 1){
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
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