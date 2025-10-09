/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:39:52 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/09 11:58:34 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact {
	public:
		void	set_firstname(const std::string& str);
		void	set_lastname(const std::string& str);
		void	set_nickname(const std::string& str);
		void	set_phonenumber(const std::string& str);
		void	set_darkestsecret(const std::string& str);

		const	std::string& get_firstname();
		const	std::string& get_lastname();
		const	std::string& get_nickname();
		const	std::string& get_phonenumber();
		const	std::string& get_darkestsecret();


	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestsecret;

};

#endif