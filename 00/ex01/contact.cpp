/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:36:13 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/09 15:35:55 by atashiro         ###   ########.fr       */
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

const std::string& Contact::get_firstname(){
	return (this->firstname);
}

const std::string& Contact::get_lastname(){
	return (this->lastname);
}

const std::string& Contact::get_nickname(){
	return (this->nickname);
}

const std::string& Contact::get_phonenumber(){
	return (this->phonenumber);
}

const std::string& Contact::get_darkestsecret(){
	return (this->darkestsecret);
}
