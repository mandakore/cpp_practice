/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:10:49 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/13 16:12:23 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}


Zombie::~Zombie(void){
	std::cout<<this->name<<": destroyed"<<std::endl;
};

void	Zombie::announce(void){
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
};