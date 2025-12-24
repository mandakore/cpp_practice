/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:11:59 by atashiro          #+#    #+#             */
/*   Updated: 2025/12/25 00:20:29 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}


Zombie::~Zombie(void){
	std::cout<<this->name<<": destroyed"<<std::endl;
};

void	Zombie::announce(void){
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
};

void Zombie::setName(std::string name) {
	this -> name = name;
}