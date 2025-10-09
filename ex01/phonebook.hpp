/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:25:07 by atashiro          #+#    #+#             */
/*   Updated: 2025/10/09 11:24:38 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "contact.hpp"

class PhoneBook {
	public:
		void		add_contact();
		std::string	char_limit(const std::string& str);

	private:
		Contact person[8];
		
};




#endif
