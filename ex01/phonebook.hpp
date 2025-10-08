/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:25:07 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/08 17:35:30 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>

class Contact {
	public:
		void	set_firstname(const std::string& str);
		void	set_lastname(const std::string& str);
		void	set_nickname(const std::string& str);
		void	set_phonenumber(const std::string& str);
		void	set_darkestsecret(const std::string& str);


	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestsecret;

};

class PhoneBook {
	public:



	private:
};




#endif
