/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:28:42 by atashiro          #+#    #+#             */
/*   Updated: 2025/12/27 17:57:47 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {

}

Weapon::~Weapon() {

}

void	Weapon::setType(std::string newWeapon) {
	this->type = newWeapon;
}

const std::string&	Weapon::getType(std::string type) {
	return (this->type);
}