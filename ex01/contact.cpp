/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:36:13 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/08 17:41:02 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::set_firstname(const std::string& str) {
	this->firstname = str;
}

void	Contact::set_lastname(const std::string&str){
	this->lastname = str;
}

void	Contact::set_nickname(const std::string&str){
	this->nickname = str;
}

void	Contact::set_phonenumber(const std::string&str){
	this->phonenumber = str;
}

void	Contact::set_darkestsecret(const std::string&str){
	this->darkestsecret = str;
}